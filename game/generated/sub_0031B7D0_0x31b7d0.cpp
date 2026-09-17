#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031B7D0
// Address: 0x31b7d0 - 0x31b840
void sub_0031B7D0_0x31b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B7D0_0x31b7d0");
#endif

    switch (ctx->pc) {
        case 0x31b7f4u: goto label_31b7f4;
        default: break;
    }

    ctx->pc = 0x31b7d0u;

    // 0x31b7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b7d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b7d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31b7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31b7e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31b7ec: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B7ECu;
    SET_GPR_U32(ctx, 31, 0x31B7F4u);
    ctx->pc = 0x31B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7ECu;
    // 0x31b7f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B7ECu, 0x31B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7F4u;
label_31b7f4:
    // 0x31b7f4: 0x3a3101c0  xori        $s1, $s1, 0x1C0
    ctx->pc = 0x31b7f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)448);
    // 0x31b7f8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31b7fc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31b800: 0x24632480  addiu       $v1, $v1, 0x2480
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9344));
    // 0x31b804: 0x24c61340  addiu       $a2, $a2, 0x1340
    ctx->pc = 0x31b804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4928));
    // 0x31b808: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x31b808u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31b80c: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x31b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x31b810: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x31b810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x31b814: 0xae1100c0  sw          $s1, 0xC0($s0)
    ctx->pc = 0x31b814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 17));
    // 0x31b818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b81c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x31b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x31b820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b82c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31b82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b830: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b834: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31B834u;
    ctx->pc = 0x31B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B834u;
    // 0x31b838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31B83Cu;
    // 0x31b83c: 0x0  nop
    ctx->pc = 0x31b83cu;
    // NOP
    ctx->pc = 0x31b840u;
}
