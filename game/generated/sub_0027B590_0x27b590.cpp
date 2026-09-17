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

// Function: sub_0027B590
// Address: 0x27b590 - 0x27b610
void sub_0027B590_0x27b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B590_0x27b590");
#endif

    switch (ctx->pc) {
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5d0u: goto label_27b5d0;
        default: break;
    }

    ctx->pc = 0x27b590u;

    // 0x27b590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b594: 0x24028019  addiu       $v0, $zero, -0x7FE7
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934553));
    // 0x27b598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b5a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b5a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b5ac: 0x34058019  ori         $a1, $zero, 0x8019
    ctx->pc = 0x27b5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32793);
    // 0x27b5b0: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B5B0u;
    SET_GPR_U32(ctx, 31, 0x27B5B8u);
    ctx->pc = 0x27B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5B0u;
    // 0x27b5b4: 0xa6020304  sh          $v0, 0x304($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B5B0u, 0x27B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5B8u;
label_27b5b8:
    // 0x27b5b8: 0xa6110096  sh          $s1, 0x96($s0)
    ctx->pc = 0x27b5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 17));
    // 0x27b5bc: 0xa61102fe  sh          $s1, 0x2FE($s0)
    ctx->pc = 0x27b5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 17));
    // 0x27b5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5c4: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27b5c8: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B5C8u;
    SET_GPR_U32(ctx, 31, 0x27B5D0u);
    ctx->pc = 0x27B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5C8u;
    // 0x27b5cc: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B5C8u, 0x27B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5D0u;
label_27b5d0:
    // 0x27b5d0: 0xa200030d  sb          $zero, 0x30D($s0)
    ctx->pc = 0x27b5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b5d4: 0x96030304  lhu         $v1, 0x304($s0)
    ctx->pc = 0x27b5d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27b5d8: 0xa21101ef  sb          $s1, 0x1EF($s0)
    ctx->pc = 0x27b5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 495), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b5dc: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x27b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x27b5e0: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27b5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b5e4: 0xa6030306  sh          $v1, 0x306($s0)
    ctx->pc = 0x27b5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 3));
    // 0x27b5e8: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x27b5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b5ec: 0xa200030e  sb          $zero, 0x30E($s0)
    ctx->pc = 0x27b5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b5f0: 0xa200030f  sb          $zero, 0x30F($s0)
    ctx->pc = 0x27b5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b5f4: 0xa20001ee  sb          $zero, 0x1EE($s0)
    ctx->pc = 0x27b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b5f8: 0xa6000152  sh          $zero, 0x152($s0)
    ctx->pc = 0x27b5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b608: 0x3e00008  jr          $ra
    ctx->pc = 0x27B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B608u;
        // 0x27b60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B610u;
}
