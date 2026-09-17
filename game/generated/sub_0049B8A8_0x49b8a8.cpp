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

// Function: sub_0049B8A8
// Address: 0x49b8a8 - 0x49b928
void sub_0049B8A8_0x49b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B8A8_0x49b8a8");
#endif

    switch (ctx->pc) {
        case 0x49b910u: goto label_49b910;
        default: break;
    }

    ctx->pc = 0x49b8a8u;

    // 0x49b8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b8ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x49b8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b8b4: 0x84c201c2  lh          $v0, 0x1C2($a2)
    ctx->pc = 0x49b8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 450)));
    // 0x49b8b8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x49B8B8u;
    {
        const bool branch_taken_0x49b8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8B8u;
        // 0x49b8bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b8b8) {
            ctx->pc = 0x49B920u;
            goto label_49b920;
        }
    }
    ctx->pc = 0x49B8C0u;
    // 0x49b8c0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49b8c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x49b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b8c8: 0x24a50b80  addiu       $a1, $a1, 0xB80
    ctx->pc = 0x49b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2944));
    // 0x49b8cc: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x49b8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x49b8d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B80u));
    // 0x49b8d4: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x49b8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x49b8d8: 0x24090022  addiu       $t1, $zero, 0x22
    ctx->pc = 0x49b8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x49b8dc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x49b8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49b8e0: 0xa44301c2  sh          $v1, 0x1C2($v0)
    ctx->pc = 0x49b8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b8e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B80u));
    // 0x49b8e8: 0x94c601be  lhu         $a2, 0x1BE($a2)
    ctx->pc = 0x49b8e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 446)));
    // 0x49b8ec: 0xa44601c0  sh          $a2, 0x1C0($v0)
    ctx->pc = 0x49b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 448), (uint16_t)GPR_U32(ctx, 6));
    // 0x49b8f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B80u));
    // 0x49b8f4: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x49b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x49b8f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49b8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b8fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b900: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49b900u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b904: 0xa4e8232c  sh          $t0, 0x232C($a3)
    ctx->pc = 0x49b904u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x49b908: 0xc126d7e  jal         func_49B5F8
    ctx->pc = 0x49B908u;
    SET_GPR_U32(ctx, 31, 0x49B910u);
    ctx->pc = 0x49B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B908u;
    // 0x49b90c: 0xa4e923c4  sh          $t1, 0x23C4($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 9156), (uint16_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B5F8u, 0x49B908u, 0x49B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B910u;
label_49b910:
    // 0x49b910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b914: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B914u;
    ctx->pc = 0x49B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B914u;
    // 0x49b918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B91Cu;
    // 0x49b91c: 0x0  nop
    ctx->pc = 0x49b91cu;
    // NOP
label_49b920:
    // 0x49b920: 0x3e00008  jr          $ra
    ctx->pc = 0x49B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B920u;
        // 0x49b924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B928u;
}
