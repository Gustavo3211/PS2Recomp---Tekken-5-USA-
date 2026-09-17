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

// Function: sub_005016B0
// Address: 0x5016b0 - 0x5018e8
void sub_005016B0_0x5016b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005016B0_0x5016b0");
#endif

    switch (ctx->pc) {
        case 0x5016e4u: goto label_5016e4;
        case 0x5016fcu: goto label_5016fc;
        case 0x501788u: goto label_501788;
        case 0x5017a4u: goto label_5017a4;
        case 0x5017c0u: goto label_5017c0;
        case 0x50180cu: goto label_50180c;
        case 0x501810u: goto label_501810;
        case 0x501844u: goto label_501844;
        case 0x501848u: goto label_501848;
        case 0x5018a4u: goto label_5018a4;
        case 0x5018c0u: goto label_5018c0;
        default: break;
    }

    ctx->pc = 0x5016b0u;

label_5016b0:
    // 0x5016b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5016b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5016b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5016b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5016b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5016b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5016bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5016c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x5016c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x5016c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016c8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x5016c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016cc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x5016ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5016d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5016d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5016d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5016d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5016d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5016dc: 0xc14010c  jal         func_500430
    ctx->pc = 0x5016DCu;
    SET_GPR_U32(ctx, 31, 0x5016E4u);
    ctx->pc = 0x5016E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5016DCu;
    // 0x5016e0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x5016DCu, 0x5016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5016E4u;
label_5016e4:
    // 0x5016e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x5016e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5016e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5016e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5016ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5016f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016f4: 0xc140374  jal         func_500DD0
    ctx->pc = 0x5016F4u;
    SET_GPR_U32(ctx, 31, 0x5016FCu);
    ctx->pc = 0x5016F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5016F4u;
    // 0x5016f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500DD0u, 0x5016F4u, 0x5016FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5016FCu;
label_5016fc:
    // 0x5016fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5016fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x501700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501704: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x501704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x501708: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x501708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50170c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x50170cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x501710: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x501710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x501714: 0x3e00008  jr          $ra
    ctx->pc = 0x501714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501714u;
        // 0x501718: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50171Cu;
    // 0x50171c: 0x0  nop
    ctx->pc = 0x50171cu;
    // NOP
    // 0x501720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x501720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x501724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x501724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x501728: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x501728u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x50172c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x501730: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x501730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x501734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x501738: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x501738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50173c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x501740: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x501740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501744: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x501744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x501748: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x501748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50174c: 0x8fb50068  lw          $s5, 0x68($sp)
    ctx->pc = 0x50174cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x501750: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x501750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x501754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x501754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501758: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x501758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50175c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x50175cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501760: 0x8fb60070  lw          $s6, 0x70($sp)
    ctx->pc = 0x501760u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x501764: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x501764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501768: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x501768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50176c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x50176cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501770: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x501770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x501774: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x501774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501778: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x501778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50177c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x50177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x501780: 0xc1405ac  jal         func_5016B0
    ctx->pc = 0x501780u;
    SET_GPR_U32(ctx, 31, 0x501788u);
    ctx->pc = 0x501784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501780u;
    // 0x501784: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5016B0u;
    goto label_5016b0;
    ctx->pc = 0x501788u;
label_501788:
    // 0x501788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x501788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50178c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x50178cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501790: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x501790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501794: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x501794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501798: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x501798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50179c: 0xc1405ac  jal         func_5016B0
    ctx->pc = 0x50179Cu;
    SET_GPR_U32(ctx, 31, 0x5017A4u);
    ctx->pc = 0x5017A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50179Cu;
    // 0x5017a0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5016B0u;
    goto label_5016b0;
    ctx->pc = 0x5017A4u;
label_5017a4:
    // 0x5017a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x5017a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x5017a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5017acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x5017b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017b4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x5017b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017b8: 0xc1405ac  jal         func_5016B0
    ctx->pc = 0x5017B8u;
    SET_GPR_U32(ctx, 31, 0x5017C0u);
    ctx->pc = 0x5017BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5017B8u;
    // 0x5017bc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5016B0u;
    goto label_5016b0;
    ctx->pc = 0x5017C0u;
label_5017c0:
    // 0x5017c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5017c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5017c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5017c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5017c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5017cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5017ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5017d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5017d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5017d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5017d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5017d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5017d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5017dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5017dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5017e0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5017e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5017e4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5017e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5017e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5017e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5017ec: 0x3e00008  jr          $ra
    ctx->pc = 0x5017ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5017F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5017ECu;
        // 0x5017f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5017ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5017F4u;
    // 0x5017f4: 0x0  nop
    ctx->pc = 0x5017f4u;
    // NOP
    // 0x5017f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5017f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5017fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5017fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501804: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501804u;
    SET_GPR_U32(ctx, 31, 0x50180Cu);
    ctx->pc = 0x501808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501804u;
    // 0x501808: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501804u, 0x50180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50180Cu;
label_50180c:
    // 0x50180c: 0x0  nop
    ctx->pc = 0x50180cu;
    // NOP
label_501810:
    // 0x501810: 0x0  nop
    ctx->pc = 0x501810u;
    // NOP
    // 0x501814: 0x0  nop
    ctx->pc = 0x501814u;
    // NOP
    // 0x501818: 0x0  nop
    ctx->pc = 0x501818u;
    // NOP
    // 0x50181c: 0x0  nop
    ctx->pc = 0x50181cu;
    // NOP
    // 0x501820: 0x0  nop
    ctx->pc = 0x501820u;
    // NOP
    // 0x501824: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501824u;
    {
        const bool branch_taken_0x501824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501824) {
            ctx->pc = 0x501810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501810;
        }
    }
    ctx->pc = 0x50182Cu;
    // 0x50182c: 0x0  nop
    ctx->pc = 0x50182cu;
    // NOP
    // 0x501830: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50183c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50183Cu;
    SET_GPR_U32(ctx, 31, 0x501844u);
    ctx->pc = 0x501840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50183Cu;
    // 0x501840: 0x2484c768  addiu       $a0, $a0, -0x3898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50183Cu, 0x501844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501844u;
label_501844:
    // 0x501844: 0x0  nop
    ctx->pc = 0x501844u;
    // NOP
label_501848:
    // 0x501848: 0x0  nop
    ctx->pc = 0x501848u;
    // NOP
    // 0x50184c: 0x0  nop
    ctx->pc = 0x50184cu;
    // NOP
    // 0x501850: 0x0  nop
    ctx->pc = 0x501850u;
    // NOP
    // 0x501854: 0x0  nop
    ctx->pc = 0x501854u;
    // NOP
    // 0x501858: 0x0  nop
    ctx->pc = 0x501858u;
    // NOP
    // 0x50185c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50185Cu;
    {
        const bool branch_taken_0x50185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50185c) {
            ctx->pc = 0x501848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501848;
        }
    }
    ctx->pc = 0x501864u;
    // 0x501864: 0x0  nop
    ctx->pc = 0x501864u;
    // NOP
    // 0x501868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x501868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50186c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x50186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x501870: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x501870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501874: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x501874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x501878: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x501878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50187c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x50187cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501880: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x501880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501884: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x501884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x501888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x50188c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x501890: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x501890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x501894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x501898: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x501898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x50189c: 0xc14010c  jal         func_500430
    ctx->pc = 0x50189Cu;
    SET_GPR_U32(ctx, 31, 0x5018A4u);
    ctx->pc = 0x5018A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50189Cu;
    // 0x5018a0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x50189Cu, 0x5018A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5018A4u;
label_5018a4:
    // 0x5018a4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x5018a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5018a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5018a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5018ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5018acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5018b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5018b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5018b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x5018b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5018b8: 0xc14063a  jal         func_5018E8
    ctx->pc = 0x5018B8u;
    SET_GPR_U32(ctx, 31, 0x5018C0u);
    ctx->pc = 0x5018BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5018B8u;
    // 0x5018bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5018E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5018E8u, 0x5018B8u, 0x5018C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5018C0u;
label_5018c0:
    // 0x5018c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x5018c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5018c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5018c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5018c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5018c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5018cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5018ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5018d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5018d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5018d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x5018d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5018d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x5018d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5018dc: 0x3e00008  jr          $ra
    ctx->pc = 0x5018DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5018DCu;
        // 0x5018e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5018DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5018E4u;
    // 0x5018e4: 0x0  nop
    ctx->pc = 0x5018e4u;
    // NOP
    ctx->pc = 0x5018e8u;
}
