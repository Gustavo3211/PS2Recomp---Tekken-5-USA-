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

// Function: sub_003432C8
// Address: 0x3432c8 - 0x3433f0
void sub_003432C8_0x3432c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003432C8_0x3432c8");
#endif

    switch (ctx->pc) {
        case 0x3432f8u: goto label_3432f8;
        case 0x34331cu: goto label_34331c;
        case 0x343330u: goto label_343330;
        case 0x34335cu: goto label_34335c;
        case 0x343368u: goto label_343368;
        case 0x343370u: goto label_343370;
        case 0x3433a4u: goto label_3433a4;
        case 0x3433c8u: goto label_3433c8;
        case 0x3433d4u: goto label_3433d4;
        case 0x3433dcu: goto label_3433dc;
        default: break;
    }

    ctx->pc = 0x3432c8u;

    // 0x3432c8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3432c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x3432cc: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x3432ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x3432d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3432d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432d4: 0xffb30428  sd          $s3, 0x428($sp)
    ctx->pc = 0x3432d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x3432d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3432d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3432dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432e0: 0xffb10418  sd          $s1, 0x418($sp)
    ctx->pc = 0x3432e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x3432e4: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x3432e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x3432e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3432e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432ec: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3432ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x3432f0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x3432F0u;
    SET_GPR_U32(ctx, 31, 0x3432F8u);
    ctx->pc = 0x3432F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432F0u;
    // 0x3432f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x3432F0u, 0x3432F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432F8u;
label_3432f8:
    // 0x3432f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3432f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3432fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343300: 0x27a90400  addiu       $t1, $sp, 0x400
    ctx->pc = 0x343300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x343304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x343304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343308: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x343308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34330c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34330cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343310: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x343310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x343314: 0xc0d1d84  jal         func_347610
    ctx->pc = 0x343314u;
    SET_GPR_U32(ctx, 31, 0x34331Cu);
    ctx->pc = 0x343318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343314u;
    // 0x343318: 0xafb00400  sw          $s0, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347610u, 0x343314u, 0x34331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34331Cu;
label_34331c:
    // 0x34331c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x34331cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x343320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x343324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343328: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x343328u;
    SET_GPR_U32(ctx, 31, 0x343330u);
    ctx->pc = 0x34332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343328u;
    // 0x34332c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x343328u, 0x343330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343330u;
label_343330:
    // 0x343330: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x343330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343334: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x343334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343338: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x343338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34333c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x34333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343340: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x343340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x343344: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x343344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343348: 0x27a90400  addiu       $t1, $sp, 0x400
    ctx->pc = 0x343348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x34334c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34334Cu;
    {
        const bool branch_taken_0x34334c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x343350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34334Cu;
        // 0x343350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34334c) {
            ctx->pc = 0x343370u;
            goto label_343370;
        }
    }
    ctx->pc = 0x343354u;
    // 0x343354: 0xc0d1d84  jal         func_347610
    ctx->pc = 0x343354u;
    SET_GPR_U32(ctx, 31, 0x34335Cu);
    ctx->pc = 0x343358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343354u;
    // 0x343358: 0xafb00400  sw          $s0, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347610u, 0x343354u, 0x34335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34335Cu;
label_34335c:
    // 0x34335c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343360: 0xc04a48c  jal         func_129230
    ctx->pc = 0x343360u;
    SET_GPR_U32(ctx, 31, 0x343368u);
    ctx->pc = 0x343364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343360u;
    // 0x343364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x343360u, 0x343368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343368u;
label_343368:
    // 0x343368: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x343368u;
    SET_GPR_U32(ctx, 31, 0x343370u);
    ctx->pc = 0x34336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343368u;
    // 0x34336c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x343368u, 0x343370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343370u;
label_343370:
    // 0x343370: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x343370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x343374: 0xdfb10418  ld          $s1, 0x418($sp)
    ctx->pc = 0x343374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x343378: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x343378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x34337c: 0xdfb30428  ld          $s3, 0x428($sp)
    ctx->pc = 0x34337cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x343380: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x343380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x343384: 0x3e00008  jr          $ra
    ctx->pc = 0x343384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343384u;
        // 0x343388: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34338Cu;
    // 0x34338c: 0x0  nop
    ctx->pc = 0x34338cu;
    // NOP
    // 0x343390: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x343390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x343394: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x343394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x343398: 0xffbf0418  sd          $ra, 0x418($sp)
    ctx->pc = 0x343398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 31));
    // 0x34339c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34339Cu;
    SET_GPR_U32(ctx, 31, 0x3433A4u);
    ctx->pc = 0x3433A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34339Cu;
    // 0x3433a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34339Cu, 0x3433A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433A4u;
label_3433a4:
    // 0x3433a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3433a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433a8: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x3433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x3433ac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3433acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3433b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3433b4: 0x27a90400  addiu       $t1, $sp, 0x400
    ctx->pc = 0x3433b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x3433b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3433b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3433bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3433c0: 0xc0d1d84  jal         func_347610
    ctx->pc = 0x3433C0u;
    SET_GPR_U32(ctx, 31, 0x3433C8u);
    ctx->pc = 0x3433C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433C0u;
    // 0x3433c4: 0xafa20400  sw          $v0, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347610u, 0x3433C0u, 0x3433C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433C8u;
label_3433c8:
    // 0x3433c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3433c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433cc: 0xc04a48c  jal         func_129230
    ctx->pc = 0x3433CCu;
    SET_GPR_U32(ctx, 31, 0x3433D4u);
    ctx->pc = 0x3433D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433CCu;
    // 0x3433d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x3433CCu, 0x3433D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433D4u;
label_3433d4:
    // 0x3433d4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x3433D4u;
    SET_GPR_U32(ctx, 31, 0x3433DCu);
    ctx->pc = 0x3433D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433D4u;
    // 0x3433d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x3433D4u, 0x3433DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433DCu;
label_3433dc:
    // 0x3433dc: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x3433dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x3433e0: 0xdfbf0418  ld          $ra, 0x418($sp)
    ctx->pc = 0x3433e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x3433e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3433E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3433E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433E4u;
        // 0x3433e8: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3433E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3433ECu;
    // 0x3433ec: 0x0  nop
    ctx->pc = 0x3433ecu;
    // NOP
    ctx->pc = 0x3433f0u;
}
