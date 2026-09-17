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

// Function: sub_004FF498
// Address: 0x4ff498 - 0x4ff630
void sub_004FF498_0x4ff498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF498_0x4ff498");
#endif

    switch (ctx->pc) {
        case 0x4ff4c4u: goto label_4ff4c4;
        case 0x4ff4d4u: goto label_4ff4d4;
        case 0x4ff4e4u: goto label_4ff4e4;
        case 0x4ff4f4u: goto label_4ff4f4;
        case 0x4ff500u: goto label_4ff500;
        case 0x4ff54cu: goto label_4ff54c;
        case 0x4ff55cu: goto label_4ff55c;
        case 0x4ff56cu: goto label_4ff56c;
        case 0x4ff57cu: goto label_4ff57c;
        case 0x4ff588u: goto label_4ff588;
        case 0x4ff5d4u: goto label_4ff5d4;
        case 0x4ff5e4u: goto label_4ff5e4;
        case 0x4ff5f4u: goto label_4ff5f4;
        case 0x4ff604u: goto label_4ff604;
        case 0x4ff610u: goto label_4ff610;
        default: break;
    }

    ctx->pc = 0x4ff498u;

    // 0x4ff498: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ff498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ff49c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4ff49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4ff4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ff4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4a4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4ff4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4ff4a8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4ff4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4ff4ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ff4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4b0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4ff4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4ff4b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ff4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ff4bc: 0xc13fdcc  jal         func_4FF730
    ctx->pc = 0x4FF4BCu;
    SET_GPR_U32(ctx, 31, 0x4FF4C4u);
    ctx->pc = 0x4FF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF4BCu;
    // 0x4ff4c0: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF730u, 0x4FF4BCu, 0x4FF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF4C4u;
label_4ff4c4:
    // 0x4ff4c4: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4ff4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4ff4c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x4ff4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ff4cc: 0xc13fdd6  jal         func_4FF758
    ctx->pc = 0x4FF4CCu;
    SET_GPR_U32(ctx, 31, 0x4FF4D4u);
    ctx->pc = 0x4FF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF4CCu;
    // 0x4ff4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF758u, 0x4FF4CCu, 0x4FF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF4D4u;
label_4ff4d4:
    // 0x4ff4d4: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x4ff4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ff4d8: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x4ff4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ff4dc: 0xc13fde0  jal         func_4FF780
    ctx->pc = 0x4FF4DCu;
    SET_GPR_U32(ctx, 31, 0x4FF4E4u);
    ctx->pc = 0x4FF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF4DCu;
    // 0x4ff4e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF780u, 0x4FF4DCu, 0x4FF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF4E4u;
label_4ff4e4:
    // 0x4ff4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4ec: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FF4ECu;
    SET_GPR_U32(ctx, 31, 0x4FF4F4u);
    ctx->pc = 0x4FF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF4ECu;
    // 0x4ff4f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FF4ECu, 0x4FF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF4F4u;
label_4ff4f4:
    // 0x4ff4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ff4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff4f8: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FF4F8u;
    SET_GPR_U32(ctx, 31, 0x4FF500u);
    ctx->pc = 0x4FF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF4F8u;
    // 0x4ff4fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FF4F8u, 0x4FF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF500u;
label_4ff500:
    // 0x4ff500: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ff500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff504: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4ff504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ff508: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4ff508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ff50c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4ff50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ff510: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4ff510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4ff514: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ff514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ff518: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF518u;
        // 0x4ff51c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF520u;
    // 0x4ff520: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ff520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ff524: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4ff524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4ff528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ff528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff52c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4ff52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4ff530: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4ff530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4ff534: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4ff534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4ff538: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ff538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff53c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ff53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ff540: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff544: 0xc13fdcc  jal         func_4FF730
    ctx->pc = 0x4FF544u;
    SET_GPR_U32(ctx, 31, 0x4FF54Cu);
    ctx->pc = 0x4FF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF544u;
    // 0x4ff548: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF730u, 0x4FF544u, 0x4FF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF54Cu;
label_4ff54c:
    // 0x4ff54c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4ff54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4ff550: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x4ff550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ff554: 0xc13fdd6  jal         func_4FF758
    ctx->pc = 0x4FF554u;
    SET_GPR_U32(ctx, 31, 0x4FF55Cu);
    ctx->pc = 0x4FF558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF554u;
    // 0x4ff558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF758u, 0x4FF554u, 0x4FF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF55Cu;
label_4ff55c:
    // 0x4ff55c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x4ff55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ff560: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x4ff560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ff564: 0xc13fde0  jal         func_4FF780
    ctx->pc = 0x4FF564u;
    SET_GPR_U32(ctx, 31, 0x4FF56Cu);
    ctx->pc = 0x4FF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF564u;
    // 0x4ff568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF780u, 0x4FF564u, 0x4FF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF56Cu;
label_4ff56c:
    // 0x4ff56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ff56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff570: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ff570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff574: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FF574u;
    SET_GPR_U32(ctx, 31, 0x4FF57Cu);
    ctx->pc = 0x4FF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF574u;
    // 0x4ff578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FF574u, 0x4FF57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF57Cu;
label_4ff57c:
    // 0x4ff57c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ff57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff580: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FF580u;
    SET_GPR_U32(ctx, 31, 0x4FF588u);
    ctx->pc = 0x4FF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF580u;
    // 0x4ff584: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FF580u, 0x4FF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF588u;
label_4ff588:
    // 0x4ff588: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4ff588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff58c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4ff58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ff590: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4ff590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ff594: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4ff594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ff598: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4ff598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4ff59c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ff59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ff5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF5A0u;
        // 0x4ff5a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF5A8u;
    // 0x4ff5a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ff5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ff5ac: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4ff5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4ff5b0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4ff5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4ff5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ff5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff5b8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4ff5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4ff5bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ff5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff5c0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4ff5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4ff5c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff5c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ff5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ff5cc: 0xc13fdcc  jal         func_4FF730
    ctx->pc = 0x4FF5CCu;
    SET_GPR_U32(ctx, 31, 0x4FF5D4u);
    ctx->pc = 0x4FF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF5CCu;
    // 0x4ff5d0: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF730u, 0x4FF5CCu, 0x4FF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF5D4u;
label_4ff5d4:
    // 0x4ff5d4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x4ff5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4ff5d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x4ff5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ff5dc: 0xc13fdd6  jal         func_4FF758
    ctx->pc = 0x4FF5DCu;
    SET_GPR_U32(ctx, 31, 0x4FF5E4u);
    ctx->pc = 0x4FF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF5DCu;
    // 0x4ff5e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF758u, 0x4FF5DCu, 0x4FF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF5E4u;
label_4ff5e4:
    // 0x4ff5e4: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x4ff5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4ff5e8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x4ff5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ff5ec: 0xc13fde0  jal         func_4FF780
    ctx->pc = 0x4FF5ECu;
    SET_GPR_U32(ctx, 31, 0x4FF5F4u);
    ctx->pc = 0x4FF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF5ECu;
    // 0x4ff5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF780u, 0x4FF5ECu, 0x4FF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF5F4u;
label_4ff5f4:
    // 0x4ff5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ff5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff5f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff5fc: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FF5FCu;
    SET_GPR_U32(ctx, 31, 0x4FF604u);
    ctx->pc = 0x4FF600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF5FCu;
    // 0x4ff600: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FF5FCu, 0x4FF604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF604u;
label_4ff604:
    // 0x4ff604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ff604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff608: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FF608u;
    SET_GPR_U32(ctx, 31, 0x4FF610u);
    ctx->pc = 0x4FF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF608u;
    // 0x4ff60c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FF608u, 0x4FF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF610u;
label_4ff610:
    // 0x4ff610: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ff610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff614: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4ff614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ff618: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4ff618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ff61c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4ff61cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ff620: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4ff620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4ff624: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ff624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ff628: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF628u;
        // 0x4ff62c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF630u;
}
