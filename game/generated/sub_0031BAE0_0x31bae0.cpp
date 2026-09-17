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

// Function: sub_0031BAE0
// Address: 0x31bae0 - 0x31bb50
void sub_0031BAE0_0x31bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BAE0_0x31bae0");
#endif

    switch (ctx->pc) {
        case 0x31bb04u: goto label_31bb04;
        default: break;
    }

    ctx->pc = 0x31bae0u;

    // 0x31bae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31bae8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31bae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31baec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31baecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31baf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31baf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31baf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31baf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31bafc: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31BAFCu;
    SET_GPR_U32(ctx, 31, 0x31BB04u);
    ctx->pc = 0x31BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAFCu;
    // 0x31bb00: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31BAFCu, 0x31BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB04u;
label_31bb04:
    // 0x31bb04: 0x3a310200  xori        $s1, $s1, 0x200
    ctx->pc = 0x31bb04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)512);
    // 0x31bb08: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31bb0c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31bb10: 0x246324a8  addiu       $v1, $v1, 0x24A8
    ctx->pc = 0x31bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9384));
    // 0x31bb14: 0x24c61640  addiu       $a2, $a2, 0x1640
    ctx->pc = 0x31bb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5696));
    // 0x31bb18: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x31bb18u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31bb1c: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x31bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x31bb20: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x31bb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31bb24: 0xae1100c0  sw          $s1, 0xC0($s0)
    ctx->pc = 0x31bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 17));
    // 0x31bb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb2c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x31bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x31bb30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31bb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bb38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31bb38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31bb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bb40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bb44: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31BB44u;
    ctx->pc = 0x31BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB44u;
    // 0x31bb48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31BB4Cu;
    // 0x31bb4c: 0x0  nop
    ctx->pc = 0x31bb4cu;
    // NOP
    ctx->pc = 0x31bb50u;
}
