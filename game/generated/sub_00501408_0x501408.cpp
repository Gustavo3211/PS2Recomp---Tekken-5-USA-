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

// Function: sub_00501408
// Address: 0x501408 - 0x5016b0
void sub_00501408_0x501408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501408_0x501408");
#endif

    switch (ctx->pc) {
        case 0x501464u: goto label_501464;
        case 0x501474u: goto label_501474;
        case 0x501484u: goto label_501484;
        case 0x501494u: goto label_501494;
        case 0x5014c4u: goto label_5014c4;
        case 0x501550u: goto label_501550;
        case 0x5015bcu: goto label_5015bc;
        case 0x501618u: goto label_501618;
        case 0x501684u: goto label_501684;
        default: break;
    }

    ctx->pc = 0x501408u;

label_501408:
    // 0x501408: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x501408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x50140c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x50140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x501410: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x501410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x501414: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x501414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x501418: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x501418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50141c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x50141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x501420: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x501420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501424: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x501424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x501428: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x501428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50142c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x50142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x501430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x501430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501434: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x501434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x501438: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x501438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50143c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x50143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x501440: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x501440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501444: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x501444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x501448: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x501448u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50144c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x50144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x501450: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x501450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501454: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x501454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x501458: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x501458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x50145c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50145Cu;
    SET_GPR_U32(ctx, 31, 0x501464u);
    ctx->pc = 0x501460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50145Cu;
    // 0x501460: 0x160f02d  daddu       $fp, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50145Cu, 0x501464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501464u;
label_501464:
    // 0x501464: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x501464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x501468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x501468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50146c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50146Cu;
    SET_GPR_U32(ctx, 31, 0x501474u);
    ctx->pc = 0x501470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50146Cu;
    // 0x501470: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50146Cu, 0x501474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501474u;
label_501474:
    // 0x501474: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x501474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501478: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x501478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x50147c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50147Cu;
    SET_GPR_U32(ctx, 31, 0x501484u);
    ctx->pc = 0x501480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50147Cu;
    // 0x501480: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50147Cu, 0x501484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501484u;
label_501484:
    // 0x501484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x501484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501488: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x501488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x50148c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50148Cu;
    SET_GPR_U32(ctx, 31, 0x501494u);
    ctx->pc = 0x501490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50148Cu;
    // 0x501490: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50148Cu, 0x501494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501494u;
label_501494:
    // 0x501494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x501494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501498: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x501498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x50149c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5014a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x5014a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x5014a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014ac: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x5014acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014b0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x5014b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014b4: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x5014b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014b8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x5014b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x5014bc: 0xc140480  jal         func_501200
    ctx->pc = 0x5014BCu;
    SET_GPR_U32(ctx, 31, 0x5014C4u);
    ctx->pc = 0x5014C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5014BCu;
    // 0x5014c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501200u, 0x5014BCu, 0x5014C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5014C4u;
label_5014c4:
    // 0x5014c4: 0x87a40024  lh          $a0, 0x24($sp)
    ctx->pc = 0x5014c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x5014c8: 0x87a20014  lh          $v0, 0x14($sp)
    ctx->pc = 0x5014c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x5014cc: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x5014ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x5014d0: 0x87a30034  lh          $v1, 0x34($sp)
    ctx->pc = 0x5014d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x5014d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x5014d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x5014d8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x5014d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5014dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5014dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5014e0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x5014e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x5014e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5014e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5014e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x5014e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5014ec: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x5014ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x5014f0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x5014f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5014f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x5014f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x5014f8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x5014f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x5014fc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x5014fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x501500: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x501500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x501504: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x501504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x501508: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x501508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x50150c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x50150cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x501510: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x501510u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x501514: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x501514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x501518: 0x3e00008  jr          $ra
    ctx->pc = 0x501518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501518u;
        // 0x50151c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501520u;
    // 0x501520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x501520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x501524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x501524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x501528: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x501528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50152c: 0x8fab0030  lw          $t3, 0x30($sp)
    ctx->pc = 0x50152cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x501530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x501530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x501534: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x501534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x501538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50153c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x50153cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x501540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x501544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x501544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x501548: 0xc140184  jal         func_500610
    ctx->pc = 0x501548u;
    SET_GPR_U32(ctx, 31, 0x501550u);
    ctx->pc = 0x50154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501548u;
    // 0x50154c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500610u, 0x501548u, 0x501550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501550u;
label_501550:
    // 0x501550: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x501550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x501554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x501554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x501558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x501558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50155c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x50155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x501560: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x501560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x501564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x501564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x501568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50156c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50156cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x501570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x501574: 0x8140408  j           func_501020
    ctx->pc = 0x501574u;
    ctx->pc = 0x501578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501574u;
    // 0x501578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501020u, 0x501574u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50157Cu;
    // 0x50157c: 0x0  nop
    ctx->pc = 0x50157cu;
    // NOP
    // 0x501580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x501580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x501584: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x501584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x501588: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x501588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50158c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x50158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x501590: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x501590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x501594: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x501594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x501598: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x501598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50159c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x50159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5015a0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x5015a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5015a4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5015a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5015a8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x5015a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5015ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5015acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5015b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5015b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5015b4: 0xc140480  jal         func_501200
    ctx->pc = 0x5015B4u;
    SET_GPR_U32(ctx, 31, 0x5015BCu);
    ctx->pc = 0x5015B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5015B4u;
    // 0x5015b8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501200u, 0x5015B4u, 0x5015BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5015BCu;
label_5015bc:
    // 0x5015bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5015bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5015c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5015c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5015c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x5015c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5015c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x5015c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5015cc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x5015ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5015d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5015d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5015d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5015d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5015d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5015d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5015dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5015dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5015e0: 0x8140408  j           func_501020
    ctx->pc = 0x5015E0u;
    ctx->pc = 0x5015E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5015E0u;
    // 0x5015e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501020u, 0x5015E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5015E8u;
    // 0x5015e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5015e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5015ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5015ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5015f0: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x5015f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5015f4: 0x8fab0030  lw          $t3, 0x30($sp)
    ctx->pc = 0x5015f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5015f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5015f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5015fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x5015fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x501600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x501604: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x501604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501608: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x501608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50160c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x501610: 0xc1404c8  jal         func_501320
    ctx->pc = 0x501610u;
    SET_GPR_U32(ctx, 31, 0x501618u);
    ctx->pc = 0x501614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501610u;
    // 0x501614: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501320u, 0x501610u, 0x501618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501618u;
label_501618:
    // 0x501618: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x501618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x50161c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x501620: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x501620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x501624: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x501624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x501628: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x501628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50162c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x501630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x501634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x501634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501638: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x501638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50163c: 0x8140408  j           func_501020
    ctx->pc = 0x50163Cu;
    ctx->pc = 0x501640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50163Cu;
    // 0x501640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501020u, 0x50163Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x501644u;
    // 0x501644: 0x0  nop
    ctx->pc = 0x501644u;
    // NOP
    // 0x501648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x501648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50164c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x50164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x501650: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x501650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x501654: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x501654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x501658: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x501658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50165c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x501660: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x501660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501664: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x501664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x501668: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x501668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50166c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x50166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x501670: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x501670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x501674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x501678: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x501678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50167c: 0xc140502  jal         func_501408
    ctx->pc = 0x50167Cu;
    SET_GPR_U32(ctx, 31, 0x501684u);
    ctx->pc = 0x501680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50167Cu;
    // 0x501680: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501408u;
    goto label_501408;
    ctx->pc = 0x501684u;
label_501684:
    // 0x501684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x501684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x501688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x501688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50168c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x50168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x501690: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x501690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x501694: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x501694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x501698: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x501698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50169c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x50169cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5016a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5016a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5016a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5016a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5016a8: 0x8140408  j           func_501020
    ctx->pc = 0x5016A8u;
    ctx->pc = 0x5016ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5016A8u;
    // 0x5016ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501020u, 0x5016A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5016B0u;
}
