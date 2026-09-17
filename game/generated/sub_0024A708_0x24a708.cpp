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

// Function: sub_0024A708
// Address: 0x24a708 - 0x24a788
void sub_0024A708_0x24a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A708_0x24a708");
#endif

    switch (ctx->pc) {
        case 0x24a72cu: goto label_24a72c;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a770u: goto label_24a770;
        default: break;
    }

    ctx->pc = 0x24a708u;

    // 0x24a708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a718: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a71c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24a724: 0xc0929ae  jal         func_24A6B8
    ctx->pc = 0x24A724u;
    SET_GPR_U32(ctx, 31, 0x24A72Cu);
    ctx->pc = 0x24A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A724u;
    // 0x24a728: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6B8u, 0x24A724u, 0x24A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A72Cu;
label_24a72c:
    // 0x24a72c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A72Cu;
    {
        const bool branch_taken_0x24a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a72c) {
            ctx->pc = 0x24A730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A72Cu;
            // 0x24a730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A774u;
            goto label_24a774;
        }
    }
    ctx->pc = 0x24A734u;
    // 0x24a734: 0xc092276  jal         func_2489D8
    ctx->pc = 0x24A734u;
    SET_GPR_U32(ctx, 31, 0x24A73Cu);
    ctx->pc = 0x24A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A734u;
    // 0x24a738: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489D8u, 0x24A734u, 0x24A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A73Cu;
label_24a73c:
    // 0x24a73c: 0x86060012  lh          $a2, 0x12($s0)
    ctx->pc = 0x24a73cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x24a740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24a74c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a754: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A754u;
    SET_GPR_U32(ctx, 31, 0x24A75Cu);
    ctx->pc = 0x24A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A754u;
    // 0x24a758: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A754u, 0x24A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A75Cu;
label_24a75c:
    // 0x24a75c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A75Cu;
    {
        const bool branch_taken_0x24a75c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A75Cu;
        // 0x24a760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a75c) {
            ctx->pc = 0x24A770u;
            goto label_24a770;
        }
    }
    ctx->pc = 0x24A764u;
    // 0x24a764: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x24a764u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a768: 0xc08039e  jal         func_200E78
    ctx->pc = 0x24A768u;
    SET_GPR_U32(ctx, 31, 0x24A770u);
    ctx->pc = 0x24A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A768u;
    // 0x24a76c: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200E78u, 0x24A768u, 0x24A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A770u;
label_24a770:
    // 0x24a770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a774:
    // 0x24a774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a77c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a780: 0x3e00008  jr          $ra
    ctx->pc = 0x24A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A780u;
        // 0x24a784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A788u;
}
