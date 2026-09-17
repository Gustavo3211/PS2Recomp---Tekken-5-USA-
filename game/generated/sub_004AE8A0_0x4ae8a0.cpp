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

// Function: sub_004AE8A0
// Address: 0x4ae8a0 - 0x4ae938
void sub_004AE8A0_0x4ae8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE8A0_0x4ae8a0");
#endif

    ctx->pc = 0x4ae8a0u;

    // 0x4ae8a0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ae8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ae8a4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ae8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ae8a8: 0x8c4a0d08  lw          $t2, 0xD08($v0)
    ctx->pc = 0x4ae8a8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0D08u));
    // 0x4ae8ac: 0x24a50d1c  addiu       $a1, $a1, 0xD1C
    ctx->pc = 0x4ae8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3356));
    // 0x4ae8b0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ae8b0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0D1Cu));
    // 0x4ae8b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ae8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4ae8b8: 0x85440052  lh          $a0, 0x52($t2)
    ctx->pc = 0x4ae8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 82)));
    // 0x4ae8bc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4ae8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4ae8c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D1Cu));
    // 0x4ae8c4: 0x25080d20  addiu       $t0, $t0, 0xD20
    ctx->pc = 0x4ae8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3360));
    // 0x4ae8c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ae8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ae8cc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ae8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D20u));
    // 0x4ae8d0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ae8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ae8d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ae8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ae8d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ae8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ae8dc: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4ae8dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ae8e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ae8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ae8e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ae8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ae8e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ae8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ae8ec: 0x24e70d24  addiu       $a3, $a3, 0xD24
    ctx->pc = 0x4ae8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3364));
    // 0x4ae8f0: 0x8d420054  lw          $v0, 0x54($t2)
    ctx->pc = 0x4ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x4ae8f4: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4ae8f4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0D24u));
    // 0x4ae8f8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ae8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ae8fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ae8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ae900: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ae900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ae904: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ae904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ae908: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae90c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4ae90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4ae910: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ae910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ae914: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ae914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ae918: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x4ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x4ae91c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ae91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ae920: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ae920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ae924: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ae924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ae928: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4ae928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4ae92c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ae92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ae930: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE930u;
        // 0x4ae934: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE938u;
}
