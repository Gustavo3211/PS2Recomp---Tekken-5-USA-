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

// Function: sub_002B3598
// Address: 0x2b3598 - 0x2b3628
void sub_002B3598_0x2b3598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3598_0x2b3598");
#endif

    switch (ctx->pc) {
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b35c0u: goto label_2b35c0;
        case 0x2b35ccu: goto label_2b35cc;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35f0u: goto label_2b35f0;
        case 0x2b35fcu: goto label_2b35fc;
        case 0x2b3608u: goto label_2b3608;
        case 0x2b3614u: goto label_2b3614;
        default: break;
    }

    ctx->pc = 0x2b3598u;

    // 0x2b3598: 0x8382baa0  lb          $v0, -0x4560($gp)
    ctx->pc = 0x2b3598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949536)));
    // 0x2b359c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b359cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b35a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b35a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b35a4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B35A4u;
    {
        const bool branch_taken_0x2b35a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35A4u;
        // 0x2b35a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35a4) {
            ctx->pc = 0x2B3618u;
            goto label_2b3618;
        }
    }
    ctx->pc = 0x2B35ACu;
    // 0x2b35ac: 0xc049a16  jal         func_126858
    ctx->pc = 0x2B35ACu;
    SET_GPR_U32(ctx, 31, 0x2B35B4u);
    ctx->pc = 0x2B35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35ACu;
    // 0x2b35b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126858u, 0x2B35ACu, 0x2B35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35B4u;
label_2b35b4:
    // 0x2b35b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b35b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35b8: 0xc0ade4a  jal         func_2B7928
    ctx->pc = 0x2B35B8u;
    SET_GPR_U32(ctx, 31, 0x2B35C0u);
    ctx->pc = 0x2B35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35B8u;
    // 0x2b35bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7928u, 0x2B35B8u, 0x2B35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35C0u;
label_2b35c0:
    // 0x2b35c0: 0xaf90cadc  sw          $s0, -0x3524($gp)
    ctx->pc = 0x2b35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953692), GPR_U32(ctx, 16));
    // 0x2b35c4: 0xc049a16  jal         func_126858
    ctx->pc = 0x2B35C4u;
    SET_GPR_U32(ctx, 31, 0x2B35CCu);
    ctx->pc = 0x2B35C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35C4u;
    // 0x2b35c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126858u, 0x2B35C4u, 0x2B35CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35CCu;
label_2b35cc:
    // 0x2b35cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b35ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35d0: 0xc0ade4a  jal         func_2B7928
    ctx->pc = 0x2B35D0u;
    SET_GPR_U32(ctx, 31, 0x2B35D8u);
    ctx->pc = 0x2B35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35D0u;
    // 0x2b35d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7928u, 0x2B35D0u, 0x2B35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35D8u;
label_2b35d8:
    // 0x2b35d8: 0xaf90cae0  sw          $s0, -0x3520($gp)
    ctx->pc = 0x2b35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953696), GPR_U32(ctx, 16));
    // 0x2b35dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b35e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B35E0u;
    {
        const bool branch_taken_0x2b35e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35E0u;
        // 0x2b35e4: 0xa382baa0  sb          $v0, -0x4560($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294949536), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35e0) {
            ctx->pc = 0x2B3618u;
            goto label_2b3618;
        }
    }
    ctx->pc = 0x2B35E8u;
    // 0x2b35e8: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x2B35E8u;
    SET_GPR_U32(ctx, 31, 0x2B35F0u);
    ctx->pc = 0x2B35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35E8u;
    // 0x2b35ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x2B35E8u, 0x2B35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35F0u;
label_2b35f0:
    // 0x2b35f0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b35f4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B35F4u;
    SET_GPR_U32(ctx, 31, 0x2B35FCu);
    ctx->pc = 0x2B35F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35F4u;
    // 0x2b35f8: 0x248401e4  addiu       $a0, $a0, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B35F4u, 0x2B35FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35FCu;
label_2b35fc:
    // 0x2b35fc: 0x0  nop
    ctx->pc = 0x2b35fcu;
    // NOP
    // 0x2b3600: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x2B3600u;
    SET_GPR_U32(ctx, 31, 0x2B3608u);
    ctx->pc = 0x2B3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3600u;
    // 0x2b3604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x2B3600u, 0x2B3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3608u;
label_2b3608:
    // 0x2b3608: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b3608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b360c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B360Cu;
    SET_GPR_U32(ctx, 31, 0x2B3614u);
    ctx->pc = 0x2B3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B360Cu;
    // 0x2b3610: 0x248401f4  addiu       $a0, $a0, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B360Cu, 0x2B3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3614u;
label_2b3614:
    // 0x2b3614: 0x0  nop
    ctx->pc = 0x2b3614u;
    // NOP
label_2b3618:
    // 0x2b3618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b361c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3620: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3620u;
        // 0x2b3624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3628u;
}
