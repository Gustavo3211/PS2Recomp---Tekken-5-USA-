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

// Function: sub_004EE2C8
// Address: 0x4ee2c8 - 0x4ee350
void sub_004EE2C8_0x4ee2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE2C8_0x4ee2c8");
#endif

    switch (ctx->pc) {
        case 0x4ee31cu: goto label_4ee31c;
        default: break;
    }

    ctx->pc = 0x4ee2c8u;

    // 0x4ee2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee2cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ee2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ee2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ee2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee2d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee2dc: 0x24e711ec  addiu       $a3, $a3, 0x11EC
    ctx->pc = 0x4ee2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
    // 0x4ee2e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ee2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee2e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ee2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ee2e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ee2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ee2ec: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4ee2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x4ee2f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x4ee2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x4ee2f4: 0x24a511f4  addiu       $a1, $a1, 0x11F4
    ctx->pc = 0x4ee2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4596));
    // 0x4ee2f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee2fc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4ee2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4ee300: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ee300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ee304: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ee304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ee308: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ee308u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ee30c: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x4ee30cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee310: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x4ee310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ee314: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x4EE314u;
    SET_GPR_U32(ctx, 31, 0x4EE31Cu);
    ctx->pc = 0x4EE318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE314u;
    // 0x4ee318: 0x84e40000  lh          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x4EE314u, 0x4EE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE31Cu;
label_4ee31c:
    // 0x4ee31c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ee31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ee320: 0x8c451208  lw          $a1, 0x1208($v0)
    ctx->pc = 0x4ee320u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4ee324: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4ee324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ee328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee32c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee330: 0x94a3015e  lhu         $v1, 0x15E($a1)
    ctx->pc = 0x4ee330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 350)));
    // 0x4ee334: 0xa603014a  sh          $v1, 0x14A($s0)
    ctx->pc = 0x4ee334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee33c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ee33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee340: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee344: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ee344u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee348: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE348u;
    ctx->pc = 0x4EE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE348u;
    // 0x4ee34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE350u;
}
