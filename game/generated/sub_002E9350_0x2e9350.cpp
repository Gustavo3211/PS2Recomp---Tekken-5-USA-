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

// Function: sub_002E9350
// Address: 0x2e9350 - 0x2e9408
void sub_002E9350_0x2e9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9350_0x2e9350");
#endif

    switch (ctx->pc) {
        case 0x2e9350u: goto label_2e9350;
        case 0x2e9354u: goto label_2e9354;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e935cu: goto label_2e935c;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e9364u: goto label_2e9364;
        case 0x2e9368u: goto label_2e9368;
        case 0x2e936cu: goto label_2e936c;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9374u: goto label_2e9374;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9380u: goto label_2e9380;
        case 0x2e9384u: goto label_2e9384;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e938cu: goto label_2e938c;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e9398u: goto label_2e9398;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a4u: goto label_2e93a4;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93b4u: goto label_2e93b4;
        case 0x2e93b8u: goto label_2e93b8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93c4u: goto label_2e93c4;
        case 0x2e93c8u: goto label_2e93c8;
        case 0x2e93ccu: goto label_2e93cc;
        case 0x2e93d0u: goto label_2e93d0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93dcu: goto label_2e93dc;
        case 0x2e93e0u: goto label_2e93e0;
        case 0x2e93e4u: goto label_2e93e4;
        case 0x2e93e8u: goto label_2e93e8;
        case 0x2e93ecu: goto label_2e93ec;
        case 0x2e93f0u: goto label_2e93f0;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e93fcu: goto label_2e93fc;
        case 0x2e9400u: goto label_2e9400;
        case 0x2e9404u: goto label_2e9404;
        default: break;
    }

    ctx->pc = 0x2e9350u;

label_2e9350:
    // 0x2e9350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e9354:
    // 0x2e9354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e9354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e9358:
    // 0x2e9358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e935c:
    // 0x2e935c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e9360:
    // 0x2e9360: 0x26500110  addiu       $s0, $s2, 0x110
    ctx->pc = 0x2e9360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_2e9364:
    // 0x2e9364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e9368:
    // 0x2e9368: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e9368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2e936c:
    // 0x2e936c: 0xc0bb8b0  jal         func_2EE2C0
label_2e9370:
    if (ctx->pc == 0x2E9370u) {
        ctx->pc = 0x2E9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E936Cu;
        // 0x2e9370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9374u;
        goto label_2e9374;
    }
    ctx->pc = 0x2E936Cu;
    SET_GPR_U32(ctx, 31, 0x2E9374u);
    ctx->pc = 0x2E9370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E936Cu;
    // 0x2e9370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2E936Cu, 0x2E9374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9374u;
label_2e9374:
    // 0x2e9374: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2e9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2e9378:
    // 0x2e9378: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_2e937c:
    // 0x2e937c: 0x2471f670  addiu       $s1, $v1, -0x990
    ctx->pc = 0x2e937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
label_2e9380:
    // 0x2e9380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e9384:
    if (ctx->pc == 0x2E9384u) {
        ctx->pc = 0x2E9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9380u;
        // 0x2e9384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9388u;
        goto label_2e9388;
    }
    ctx->pc = 0x2E9380u;
    {
        const bool branch_taken_0x2e9380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9380u;
        // 0x2e9384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9380) {
            ctx->pc = 0x2E93B8u;
            goto label_2e93b8;
        }
    }
    ctx->pc = 0x2E9388u;
label_2e9388:
    // 0x2e9388: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x2e9388u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2e938c:
    // 0x2e938c: 0xc0da5fc  jal         func_3697F0
label_2e9390:
    if (ctx->pc == 0x2E9390u) {
        ctx->pc = 0x2E9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E938Cu;
        // 0x2e9390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9394u;
        goto label_2e9394;
    }
    ctx->pc = 0x2E938Cu;
    SET_GPR_U32(ctx, 31, 0x2E9394u);
    ctx->pc = 0x2E9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E938Cu;
    // 0x2e9390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2E938Cu, 0x2E9394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9394u;
label_2e9394:
    // 0x2e9394: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2e9398:
    // 0x2e9398: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2e9398u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e939c:
    // 0x2e939c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e939cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e93a0:
    // 0x2e93a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e93a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e93a4:
    // 0x2e93a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e93a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e93a8:
    // 0x2e93a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e93a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e93ac:
    // 0x2e93ac: 0x80da5fc  j           func_3697F0
label_2e93b0:
    if (ctx->pc == 0x2E93B0u) {
        ctx->pc = 0x2E93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93ACu;
        // 0x2e93b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93B4u;
        goto label_2e93b4;
    }
    ctx->pc = 0x2E93ACu;
    ctx->pc = 0x2E93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93ACu;
    // 0x2e93b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    sub_003697F0_0x3697f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E93B4u;
label_2e93b4:
    // 0x2e93b4: 0x0  nop
    ctx->pc = 0x2e93b4u;
    // NOP
label_2e93b8:
    // 0x2e93b8: 0xc0bb8e4  jal         func_2EE390
label_2e93bc:
    if (ctx->pc == 0x2E93BCu) {
        ctx->pc = 0x2E93C0u;
        goto label_2e93c0;
    }
    ctx->pc = 0x2E93B8u;
    SET_GPR_U32(ctx, 31, 0x2E93C0u);
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2E93B8u, 0x2E93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93C0u;
label_2e93c0:
    // 0x2e93c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e93c4:
    if (ctx->pc == 0x2E93C4u) {
        ctx->pc = 0x2E93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C0u;
        // 0x2e93c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93C8u;
        goto label_2e93c8;
    }
    ctx->pc = 0x2E93C0u;
    {
        const bool branch_taken_0x2e93c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C0u;
        // 0x2e93c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93c0) {
            ctx->pc = 0x2E93F0u;
            goto label_2e93f0;
        }
    }
    ctx->pc = 0x2E93C8u;
label_2e93c8:
    // 0x2e93c8: 0xc092940  jal         func_24A500
label_2e93cc:
    if (ctx->pc == 0x2E93CCu) {
        ctx->pc = 0x2E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C8u;
        // 0x2e93cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93D0u;
        goto label_2e93d0;
    }
    ctx->pc = 0x2E93C8u;
    SET_GPR_U32(ctx, 31, 0x2E93D0u);
    ctx->pc = 0x2E93CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93C8u;
    // 0x2e93cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2E93C8u, 0x2E93D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93D0u;
label_2e93d0:
    // 0x2e93d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2e93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2e93d4:
    // 0x2e93d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e93d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e93d8:
    // 0x2e93d8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2e93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2e93dc:
    // 0x2e93dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e93dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e93e0:
    // 0x2e93e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e93e4:
    // 0x2e93e4: 0x60f809  jalr        $v1
label_2e93e8:
    if (ctx->pc == 0x2E93E8u) {
        ctx->pc = 0x2E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93E4u;
        // 0x2e93e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93ECu;
        goto label_2e93ec;
    }
    ctx->pc = 0x2E93E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E93ECu);
        ctx->pc = 0x2E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93E4u;
        // 0x2e93e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E93E4u, 0x2E93ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E93ECu;
label_2e93ec:
    // 0x2e93ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e93ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e93f0:
    // 0x2e93f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e93f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e93f4:
    // 0x2e93f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e93f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e93f8:
    // 0x2e93f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e93f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e93fc:
    // 0x2e93fc: 0x3e00008  jr          $ra
label_2e9400:
    if (ctx->pc == 0x2E9400u) {
        ctx->pc = 0x2E9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93FCu;
        // 0x2e9400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9404u;
        goto label_2e9404;
    }
    ctx->pc = 0x2E93FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93FCu;
        // 0x2e9400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E93FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9404u;
label_2e9404:
    // 0x2e9404: 0x0  nop
    ctx->pc = 0x2e9404u;
    // NOP
    ctx->pc = 0x2e9408u;
}
