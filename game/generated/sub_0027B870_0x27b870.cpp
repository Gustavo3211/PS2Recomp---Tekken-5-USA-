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

// Function: sub_0027B870
// Address: 0x27b870 - 0x27b8e8
void sub_0027B870_0x27b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B870_0x27b870");
#endif

    switch (ctx->pc) {
        case 0x27b89cu: goto label_27b89c;
        default: break;
    }

    ctx->pc = 0x27b870u;

    // 0x27b870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b878: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27b878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b87c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b880: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27b880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b888: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x27b888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x27b88c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x27b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x27b890: 0xa6060304  sh          $a2, 0x304($s0)
    ctx->pc = 0x27b890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 6));
    // 0x27b894: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B894u;
    SET_GPR_U32(ctx, 31, 0x27B89Cu);
    ctx->pc = 0x27B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B894u;
    // 0x27b898: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B894u, 0x27B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B89Cu;
label_27b89c:
    // 0x27b89c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x27b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27b8a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b8a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b8a8: 0xa211030e  sb          $s1, 0x30E($s0)
    ctx->pc = 0x27b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b8ac: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27b8b0: 0xa6030300  sh          $v1, 0x300($s0)
    ctx->pc = 0x27b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 3));
    // 0x27b8b4: 0xa60502fe  sh          $a1, 0x2FE($s0)
    ctx->pc = 0x27b8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b8b8: 0xa2040190  sb          $a0, 0x190($s0)
    ctx->pc = 0x27b8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x27b8bc: 0xa6000306  sh          $zero, 0x306($s0)
    ctx->pc = 0x27b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b8c0: 0xa200030d  sb          $zero, 0x30D($s0)
    ctx->pc = 0x27b8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b8c4: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x27b8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b8c8: 0xa200030f  sb          $zero, 0x30F($s0)
    ctx->pc = 0x27b8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b8cc: 0xa6050096  sh          $a1, 0x96($s0)
    ctx->pc = 0x27b8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b8d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8DCu;
        // 0x27b8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B8E4u;
    // 0x27b8e4: 0x0  nop
    ctx->pc = 0x27b8e4u;
    // NOP
    ctx->pc = 0x27b8e8u;
}
