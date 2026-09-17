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

// Function: sub_0031B6F8
// Address: 0x31b6f8 - 0x31b768
void sub_0031B6F8_0x31b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B6F8_0x31b6f8");
#endif

    switch (ctx->pc) {
        case 0x31b71cu: goto label_31b71c;
        default: break;
    }

    ctx->pc = 0x31b6f8u;

    // 0x31b6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b700: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31b700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b70c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31b710: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31b714: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B714u;
    SET_GPR_U32(ctx, 31, 0x31B71Cu);
    ctx->pc = 0x31B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B714u;
    // 0x31b718: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B714u, 0x31B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B71Cu;
label_31b71c:
    // 0x31b71c: 0x3a3101c0  xori        $s1, $s1, 0x1C0
    ctx->pc = 0x31b71cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)448);
    // 0x31b720: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31b720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31b724: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31b724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31b728: 0x24632480  addiu       $v1, $v1, 0x2480
    ctx->pc = 0x31b728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9344));
    // 0x31b72c: 0x24c613a8  addiu       $a2, $a2, 0x13A8
    ctx->pc = 0x31b72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5032));
    // 0x31b730: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x31b730u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31b734: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x31b734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x31b738: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x31b738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x31b73c: 0xae1100c0  sw          $s1, 0xC0($s0)
    ctx->pc = 0x31b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 17));
    // 0x31b740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b744: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x31b744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x31b748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31b754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b758: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b75c: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31B75Cu;
    ctx->pc = 0x31B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B75Cu;
    // 0x31b760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31B764u;
    // 0x31b764: 0x0  nop
    ctx->pc = 0x31b764u;
    // NOP
    ctx->pc = 0x31b768u;
}
