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

// Function: sub_002AD2E0
// Address: 0x2ad2e0 - 0x2ad388
void sub_002AD2E0_0x2ad2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD2E0_0x2ad2e0");
#endif

    switch (ctx->pc) {
        case 0x2ad300u: goto label_2ad300;
        case 0x2ad308u: goto label_2ad308;
        case 0x2ad360u: goto label_2ad360;
        default: break;
    }

    ctx->pc = 0x2ad2e0u;

    // 0x2ad2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad2e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ad2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ad2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ad2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad2f0: 0x8c90007c  lw          $s0, 0x7C($a0)
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2ad2f4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD2F4u;
    {
        const bool branch_taken_0x2ad2f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2F4u;
        // 0x2ad2f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2f4) {
            ctx->pc = 0x2AD320u;
            goto label_2ad320;
        }
    }
    ctx->pc = 0x2AD2FCu;
    // 0x2ad2fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ad2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ad300:
    // 0x2ad300: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2AD300u;
    SET_GPR_U32(ctx, 31, 0x2AD308u);
    ctx->pc = 0x2AD304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD300u;
    // 0x2ad304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2AD300u, 0x2AD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD308u;
label_2ad308:
    // 0x2ad308: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD308u;
    {
        const bool branch_taken_0x2ad308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad308) {
            ctx->pc = 0x2AD30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD308u;
            // 0x2ad30c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD318u;
            goto label_2ad318;
        }
    }
    ctx->pc = 0x2AD310u;
    // 0x2ad310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD310u;
    {
        const bool branch_taken_0x2ad310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD310u;
        // 0x2ad314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad310) {
            ctx->pc = 0x2AD324u;
            goto label_2ad324;
        }
    }
    ctx->pc = 0x2AD318u;
label_2ad318:
    // 0x2ad318: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AD318u;
    {
        const bool branch_taken_0x2ad318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad318) {
            ctx->pc = 0x2AD31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD318u;
            // 0x2ad31c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad300;
        }
    }
    ctx->pc = 0x2AD320u;
label_2ad320:
    // 0x2ad320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad324:
    // 0x2ad324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ad324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ad328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad330: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD330u;
        // 0x2ad334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD338u;
    // 0x2ad338: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2ad338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2ad33c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD33Cu;
    {
        const bool branch_taken_0x2ad33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad33c) {
            ctx->pc = 0x2AD340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD33Cu;
            // 0x2ad340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD350u;
            goto label_2ad350;
        }
    }
    ctx->pc = 0x2AD344u;
    // 0x2ad344: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD344u;
        // 0x2ad348: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD34Cu;
    // 0x2ad34c: 0x0  nop
    ctx->pc = 0x2ad34cu;
    // NOP
label_2ad350:
    // 0x2ad350: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ad350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ad354: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD354u;
    {
        const bool branch_taken_0x2ad354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad354) {
            ctx->pc = 0x2AD37Cu;
            goto label_2ad37c;
        }
    }
    ctx->pc = 0x2AD35Cu;
    // 0x2ad35c: 0x0  nop
    ctx->pc = 0x2ad35cu;
    // NOP
label_2ad360:
    // 0x2ad360: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ad360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad364: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ad368: 0x0  nop
    ctx->pc = 0x2ad368u;
    // NOP
    // 0x2ad36c: 0x0  nop
    ctx->pc = 0x2ad36cu;
    // NOP
    // 0x2ad370: 0x0  nop
    ctx->pc = 0x2ad370u;
    // NOP
    // 0x2ad374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD374u;
    {
        const bool branch_taken_0x2ad374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD374u;
        // 0x2ad378: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad374) {
            ctx->pc = 0x2AD360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad360;
        }
    }
    ctx->pc = 0x2AD37Cu;
label_2ad37c:
    // 0x2ad37c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD37Cu;
        // 0x2ad380: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD384u;
    // 0x2ad384: 0x0  nop
    ctx->pc = 0x2ad384u;
    // NOP
    ctx->pc = 0x2ad388u;
}
