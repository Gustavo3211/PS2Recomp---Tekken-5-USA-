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

// Function: sub_004A96E0
// Address: 0x4a96e0 - 0x4a9748
void sub_004A96E0_0x4a96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A96E0_0x4a96e0");
#endif

    switch (ctx->pc) {
        case 0x4a9730u: goto label_4a9730;
        default: break;
    }

    ctx->pc = 0x4a96e0u;

    // 0x4a96e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a96e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a96e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a96e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a96e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a96ec: 0x24a50c5c  addiu       $a1, $a1, 0xC5C
    ctx->pc = 0x4a96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3164));
    // 0x4a96f0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a96f4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a96f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a96f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C5Cu));
    // 0x4a96fc: 0x24639550  addiu       $v1, $v1, -0x6AB0
    ctx->pc = 0x4a96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939984));
    // 0x4a9700: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x4a9700u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a9704: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4a9704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a9708: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a970c: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4a970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a9710: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a9710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a9714: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a9714u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a9718: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a9718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a971c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a971cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a9720: 0x94c30c84  lhu         $v1, 0xC84($a2)
    ctx->pc = 0x4a9720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 3204)));
    // 0x4a9724: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a9724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a9728: 0xc12a6fc  jal         func_4A9BF0
    ctx->pc = 0x4A9728u;
    SET_GPR_U32(ctx, 31, 0x4A9730u);
    ctx->pc = 0x4A972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9728u;
    // 0x4a972c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BF0u, 0x4A9728u, 0x4A9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9730u;
label_4a9730:
    // 0x4a9730: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a9730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a9734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9738: 0xac620c64  sw          $v0, 0xC64($v1)
    ctx->pc = 0x4a9738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0C64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C64u, _value); } while (0);
    // 0x4a973c: 0x812a4fc  j           func_4A93F0
    ctx->pc = 0x4A973Cu;
    ctx->pc = 0x4A9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A973Cu;
    // 0x4a9740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A93F0u, 0x4A973Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A9744u;
    // 0x4a9744: 0x0  nop
    ctx->pc = 0x4a9744u;
    // NOP
    ctx->pc = 0x4a9748u;
}
