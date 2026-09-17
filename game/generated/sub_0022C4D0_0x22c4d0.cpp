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

// Function: sub_0022C4D0
// Address: 0x22c4d0 - 0x22c5d0
void sub_0022C4D0_0x22c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C4D0_0x22c4d0");
#endif

    switch (ctx->pc) {
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c500u: goto label_22c500;
        case 0x22c510u: goto label_22c510;
        case 0x22c534u: goto label_22c534;
        case 0x22c540u: goto label_22c540;
        case 0x22c570u: goto label_22c570;
        case 0x22c578u: goto label_22c578;
        case 0x22c5a8u: goto label_22c5a8;
        default: break;
    }

    ctx->pc = 0x22c4d0u;

    // 0x22c4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c4d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c4d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c4e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22c4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c4e8: 0xc08b114  jal         func_22C450
    ctx->pc = 0x22C4E8u;
    SET_GPR_U32(ctx, 31, 0x22C4F0u);
    ctx->pc = 0x22C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C450u, 0x22C4E8u, 0x22C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4F0u;
label_22c4f0:
    // 0x22c4f0: 0xc0919a0  jal         func_246680
    ctx->pc = 0x22C4F0u;
    SET_GPR_U32(ctx, 31, 0x22C4F8u);
    ctx->pc = 0x246680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246680u, 0x22C4F0u, 0x22C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4F8u;
label_22c4f8:
    // 0x22c4f8: 0xc0919ac  jal         func_2466B0
    ctx->pc = 0x22C4F8u;
    SET_GPR_U32(ctx, 31, 0x22C500u);
    ctx->pc = 0x22C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4F8u;
    // 0x22c4fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2466B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2466B0u, 0x22C4F8u, 0x22C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C500u;
label_22c500:
    // 0x22c500: 0x1a40002b  blez        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x22C500u;
    {
        const bool branch_taken_0x22c500 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C500u;
        // 0x22c504: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c500) {
            ctx->pc = 0x22C5B0u;
            goto label_22c5b0;
        }
    }
    ctx->pc = 0x22C508u;
    // 0x22c508: 0xc08b120  jal         func_22C480
    ctx->pc = 0x22C508u;
    SET_GPR_U32(ctx, 31, 0x22C510u);
    ctx->pc = 0x22C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C508u;
    // 0x22c50c: 0x3c130016  lui         $s3, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)22 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C480u, 0x22C508u, 0x22C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C510u;
label_22c510:
    // 0x22c510: 0x26709288  addiu       $s0, $s3, -0x6D78
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939272));
    // 0x22c514: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x22c514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x22c518: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22c518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x22c51c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x22c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x22c520: 0x24e72d80  addiu       $a3, $a3, 0x2D80
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11648));
    // 0x22c524: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c528: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x22c528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x22c52c: 0xc089248  jal         func_224920
    ctx->pc = 0x22C52Cu;
    SET_GPR_U32(ctx, 31, 0x22C534u);
    ctx->pc = 0x22C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C52Cu;
    // 0x22c530: 0x34c60020  ori         $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22C52Cu, 0x22C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C534u;
label_22c534:
    // 0x22c534: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c538: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C538u;
    {
        const bool branch_taken_0x22c538 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C538u;
        // 0x22c53c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c538) {
            ctx->pc = 0x22C55Cu;
            goto label_22c55c;
        }
    }
    ctx->pc = 0x22C540u;
label_22c540:
    // 0x22c540: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22c540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22c544: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x22c544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x22c548: 0x0  nop
    ctx->pc = 0x22c548u;
    // NOP
    // 0x22c54c: 0x0  nop
    ctx->pc = 0x22c54cu;
    // NOP
    // 0x22c550: 0x0  nop
    ctx->pc = 0x22c550u;
    // NOP
    // 0x22c554: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C554u;
    {
        const bool branch_taken_0x22c554 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C554u;
        // 0x22c558: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c554) {
            ctx->pc = 0x22C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c540;
        }
    }
    ctx->pc = 0x22C55Cu;
label_22c55c:
    // 0x22c55c: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x22C55Cu;
    {
        const bool branch_taken_0x22c55c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0x8e709288  lw          $s0, -0x6D78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c55c) {
            ctx->pc = 0x22C5B0u;
            goto label_22c5b0;
        }
    }
    ctx->pc = 0x22C564u;
    // 0x22c564: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x22c564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c568: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x22c56c: 0x0  nop
    ctx->pc = 0x22c56cu;
    // NOP
label_22c570:
    // 0x22c570: 0xc0919c0  jal         func_246700
    ctx->pc = 0x22C570u;
    SET_GPR_U32(ctx, 31, 0x22C578u);
    ctx->pc = 0x22C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C570u;
    // 0x22c574: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246700u, 0x22C570u, 0x22C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C578u;
label_22c578:
    // 0x22c578: 0xae30006c  sw          $s0, 0x6C($s1)
    ctx->pc = 0x22c578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 16));
    // 0x22c57c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22c580: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x22c580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x22c584: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x22c584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x22c588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c58c: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x22c58cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c594: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22c594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x22c598: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x22c598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x22c59c: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x22c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x22c5a0: 0xc08b112  jal         func_22C448
    ctx->pc = 0x22C5A0u;
    SET_GPR_U32(ctx, 31, 0x22C5A8u);
    ctx->pc = 0x22C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5A0u;
    // 0x22c5a4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C448u, 0x22C5A0u, 0x22C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x5e40fff1  bgtzl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x22C5A8u;
    {
        const bool branch_taken_0x22c5a8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x22c5a8) {
            ctx->pc = 0x22C5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C5A8u;
            // 0x22c5ac: 0x8e240064  lw          $a0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c570;
        }
    }
    ctx->pc = 0x22C5B0u;
label_22c5b0:
    // 0x22c5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c5b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c5bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22c5bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5C4u;
        // 0x22c5c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C5CCu;
    // 0x22c5cc: 0x0  nop
    ctx->pc = 0x22c5ccu;
    // NOP
    ctx->pc = 0x22c5d0u;
}
