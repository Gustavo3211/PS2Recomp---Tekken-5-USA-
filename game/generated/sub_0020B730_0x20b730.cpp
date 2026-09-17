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

// Function: sub_0020B730
// Address: 0x20b730 - 0x20b990
void sub_0020B730_0x20b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B730_0x20b730");
#endif

    switch (ctx->pc) {
        case 0x20b758u: goto label_20b758;
        case 0x20b768u: goto label_20b768;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b940u: goto label_20b940;
        case 0x20b954u: goto label_20b954;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b968u: goto label_20b968;
        case 0x20b974u: goto label_20b974;
        default: break;
    }

    ctx->pc = 0x20b730u;

    // 0x20b730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20b734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20b73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b744: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20b744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20b74c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20b750: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x20B750u;
    SET_GPR_U32(ctx, 31, 0x20B758u);
    ctx->pc = 0x20B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B750u;
    // 0x20b754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x20B750u, 0x20B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B758u;
label_20b758:
    // 0x20b758: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20b758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20b75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b760: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x20B760u;
    SET_GPR_U32(ctx, 31, 0x20B768u);
    ctx->pc = 0x20B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B760u;
    // 0x20b764: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x20B760u, 0x20B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B768u;
label_20b768:
    // 0x20b768: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b76c: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x20B76Cu;
    {
        const bool branch_taken_0x20b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B76Cu;
        // 0x20b770: 0x8f8398ac  lw          $v1, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b76c) {
            ctx->pc = 0x20B868u;
            goto label_20b868;
        }
    }
    ctx->pc = 0x20B774u;
    // 0x20b774: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x20B774u;
    {
        const bool branch_taken_0x20b774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B774u;
        // 0x20b778: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b774) {
            ctx->pc = 0x20B868u;
            goto label_20b868;
        }
    }
    ctx->pc = 0x20B77Cu;
    // 0x20b77c: 0x24838858  addiu       $v1, $a0, -0x77A8
    ctx->pc = 0x20b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x20b780: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20b784: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20b788: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20b788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20b78c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20B78Cu;
    {
        const bool branch_taken_0x20b78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b78c) {
            ctx->pc = 0x20B790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B78Cu;
            // 0x20b790: 0x24838858  addiu       $v1, $a0, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7C8u;
            goto label_20b7c8;
        }
    }
    ctx->pc = 0x20B794u;
    // 0x20b794: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20b794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20b798: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20B798u;
    {
        const bool branch_taken_0x20b798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b798) {
            ctx->pc = 0x20B79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B798u;
            // 0x20b79c: 0x24838858  addiu       $v1, $a0, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7C8u;
            goto label_20b7c8;
        }
    }
    ctx->pc = 0x20B7A0u;
    // 0x20b7a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x20b7a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B7A4u;
    {
        const bool branch_taken_0x20b7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b7a4) {
            ctx->pc = 0x20B7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B7A4u;
            // 0x20b7a8: 0x24838858  addiu       $v1, $a0, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7C8u;
            goto label_20b7c8;
        }
    }
    ctx->pc = 0x20B7ACu;
    // 0x20b7ac: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x20b7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x20b7b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B7B0u;
    {
        const bool branch_taken_0x20b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b7b0) {
            ctx->pc = 0x20B7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B7B0u;
            // 0x20b7b4: 0x24838858  addiu       $v1, $a0, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7C8u;
            goto label_20b7c8;
        }
    }
    ctx->pc = 0x20B7B8u;
    // 0x20b7b8: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x20B7B8u;
    SET_GPR_U32(ctx, 31, 0x20B7C0u);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x20B7B8u, 0x20B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7C0u;
label_20b7c0:
    // 0x20b7c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20B7C0u;
    {
        const bool branch_taken_0x20b7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7C0u;
        // 0x20b7c4: 0x304208f0  andi        $v0, $v0, 0x8F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7c0) {
            ctx->pc = 0x20B82Cu;
            goto label_20b82c;
        }
    }
    ctx->pc = 0x20B7C8u;
label_20b7c8:
    // 0x20b7c8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20b7cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b7d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20b7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20b7d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B7D4u;
    {
        const bool branch_taken_0x20b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7D4u;
        // 0x20b7d8: 0x24838858  addiu       $v1, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7d4) {
            ctx->pc = 0x20B7F0u;
            goto label_20b7f0;
        }
    }
    ctx->pc = 0x20B7DCu;
    // 0x20b7dc: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20b7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20b7e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B7E0u;
    {
        const bool branch_taken_0x20b7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b7e0) {
            ctx->pc = 0x20B7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B7E0u;
            // 0x20b7e4: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7F4u;
            goto label_20b7f4;
        }
    }
    ctx->pc = 0x20B7E8u;
    // 0x20b7e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20B7E8u;
    {
        const bool branch_taken_0x20b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E8u;
        // 0x20b7ec: 0x9622003c  lhu         $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7e8) {
            ctx->pc = 0x20B810u;
            goto label_20b810;
        }
    }
    ctx->pc = 0x20B7F0u;
label_20b7f0:
    // 0x20b7f0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_20b7f4:
    // 0x20b7f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20b7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20b7f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B7F8u;
    {
        const bool branch_taken_0x20b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7F8u;
        // 0x20b7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7f8) {
            ctx->pc = 0x20B828u;
            goto label_20b828;
        }
    }
    ctx->pc = 0x20B800u;
    // 0x20b800: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x20b800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x20b804: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B804u;
    {
        const bool branch_taken_0x20b804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b804) {
            ctx->pc = 0x20B808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B804u;
            // 0x20b808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B828u;
            goto label_20b828;
        }
    }
    ctx->pc = 0x20B80Cu;
    // 0x20b80c: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x20b80cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_20b810:
    // 0x20b810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b818: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20b818u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20b81c: 0x8c22a850  lw          $v0, -0x57B0($at)
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944848)));
    // 0x20b820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B820u;
    {
        const bool branch_taken_0x20b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B820u;
        // 0x20b824: 0x304208f0  andi        $v0, $v0, 0x8F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b820) {
            ctx->pc = 0x20B82Cu;
            goto label_20b82c;
        }
    }
    ctx->pc = 0x20B828u;
label_20b828:
    // 0x20b828: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x20b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
label_20b82c:
    // 0x20b82c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B82Cu;
    {
        const bool branch_taken_0x20b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b82c) {
            ctx->pc = 0x20B844u;
            goto label_20b844;
        }
    }
    ctx->pc = 0x20B834u;
    // 0x20b834: 0xc0a39f0  jal         func_28E7C0
    ctx->pc = 0x20B834u;
    SET_GPR_U32(ctx, 31, 0x20B83Cu);
    ctx->pc = 0x28E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7C0u, 0x20B834u, 0x20B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B83Cu;
label_20b83c:
    // 0x20b83c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B83Cu;
    {
        const bool branch_taken_0x20b83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B83Cu;
        // 0x20b840: 0x8f8398ac  lw          $v1, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b83c) {
            ctx->pc = 0x20B854u;
            goto label_20b854;
        }
    }
    ctx->pc = 0x20B844u;
label_20b844:
    // 0x20b844: 0xc0a39f4  jal         func_28E7D0
    ctx->pc = 0x20B844u;
    SET_GPR_U32(ctx, 31, 0x20B84Cu);
    ctx->pc = 0x28E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7D0u, 0x20B844u, 0x20B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B84Cu;
label_20b84c:
    // 0x20b84c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B84Cu;
    {
        const bool branch_taken_0x20b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B84Cu;
        // 0x20b850: 0x8f8398ac  lw          $v1, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b84c) {
            ctx->pc = 0x20B868u;
            goto label_20b868;
        }
    }
    ctx->pc = 0x20B854u;
label_20b854:
    // 0x20b854: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x20b854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x20b858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B858u;
    {
        const bool branch_taken_0x20b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b858) {
            ctx->pc = 0x20B86Cu;
            goto label_20b86c;
        }
    }
    ctx->pc = 0x20B860u;
    // 0x20b860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B860u;
    {
        const bool branch_taken_0x20b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B860u;
        // 0x20b864: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b860) {
            ctx->pc = 0x20B86Cu;
            goto label_20b86c;
        }
    }
    ctx->pc = 0x20B868u;
label_20b868:
    // 0x20b868: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20b868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b86c:
    // 0x20b86c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x20B86Cu;
    {
        const bool branch_taken_0x20b86c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B86Cu;
        // 0x20b870: 0x8f82c8c8  lw          $v0, -0x3738($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b86c) {
            ctx->pc = 0x20B8C0u;
            goto label_20b8c0;
        }
    }
    ctx->pc = 0x20B874u;
    // 0x20b874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20b874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b87c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x20b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x20b880: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b884: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x20b884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x20b888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b88c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20b88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20b890: 0x0  nop
    ctx->pc = 0x20b890u;
    // NOP
    // 0x20b894: 0x0  nop
    ctx->pc = 0x20b894u;
    // NOP
    // 0x20b898: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20b898u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20b89c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20b89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b8a0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B8A0u;
    {
        const bool branch_taken_0x20b8a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b8a0) {
            ctx->pc = 0x20B8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B8A0u;
            // 0x20b8a4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B8A8u;
            goto label_20b8a8;
        }
    }
    ctx->pc = 0x20B8A8u;
label_20b8a8:
    // 0x20b8a8: 0xc082dbe  jal         func_20B6F8
    ctx->pc = 0x20B8A8u;
    SET_GPR_U32(ctx, 31, 0x20B8B0u);
    ctx->pc = 0x20B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8A8u;
    // 0x20b8ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F8u, 0x20B8A8u, 0x20B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8B0u;
label_20b8b0:
    // 0x20b8b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b8b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x20B8B4u;
    {
        const bool branch_taken_0x20b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8B4u;
        // 0x20b8b8: 0xaf82c8c8  sw          $v0, -0x3738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8b4) {
            ctx->pc = 0x20B974u;
            goto label_20b974;
        }
    }
    ctx->pc = 0x20B8BCu;
    // 0x20b8bc: 0x0  nop
    ctx->pc = 0x20b8bcu;
    // NOP
label_20b8c0:
    // 0x20b8c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b8c4: 0x2843001e  slti        $v1, $v0, 0x1E
    ctx->pc = 0x20b8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x20b8c8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x20B8C8u;
    {
        const bool branch_taken_0x20b8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b8c8) {
            ctx->pc = 0x20B930u;
            goto label_20b930;
        }
    }
    ctx->pc = 0x20B8D0u;
    // 0x20b8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b8d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b8d8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x20b8dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b8e0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x20b8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x20b8e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b8e8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x20b8ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20b8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20b8f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20b8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20b8f4: 0x0  nop
    ctx->pc = 0x20b8f4u;
    // NOP
    // 0x20b8f8: 0x0  nop
    ctx->pc = 0x20b8f8u;
    // NOP
    // 0x20b8fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20b8fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20b900: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20b904: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x20b904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b908: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B908u;
    {
        const bool branch_taken_0x20b908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b908) {
            ctx->pc = 0x20B90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B908u;
            // 0x20b90c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B910u;
            goto label_20b910;
        }
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b914: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20b914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x20b918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b91c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b928: 0x8082dbe  j           func_20B6F8
    ctx->pc = 0x20B928u;
    ctx->pc = 0x20B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B928u;
    // 0x20b92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B6F8u;
    sub_0020B6F8_0x20b6f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20B930u;
label_20b930:
    // 0x20b930: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x20b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x20b934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b938: 0xc082dbe  jal         func_20B6F8
    ctx->pc = 0x20B938u;
    SET_GPR_U32(ctx, 31, 0x20B940u);
    ctx->pc = 0x20B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F8u, 0x20B938u, 0x20B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B940u;
label_20b940:
    // 0x20b940: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20b940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20b944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b948: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b94c: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x20B94Cu;
    SET_GPR_U32(ctx, 31, 0x20B954u);
    ctx->pc = 0x20B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B94Cu;
    // 0x20b950: 0xa04383c4  sb          $v1, -0x7C3C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294935492), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x20B94Cu, 0x20B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B954u;
label_20b954:
    // 0x20b954: 0xc0821ce  jal         func_208738
    ctx->pc = 0x20B954u;
    SET_GPR_U32(ctx, 31, 0x20B95Cu);
    ctx->pc = 0x20B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B954u;
    // 0x20b958: 0x8f84c8d0  lw          $a0, -0x3730($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x20B954u, 0x20B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B95Cu;
label_20b95c:
    // 0x20b95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b960: 0xc082d26  jal         func_20B498
    ctx->pc = 0x20B960u;
    SET_GPR_U32(ctx, 31, 0x20B968u);
    ctx->pc = 0x20B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B960u;
    // 0x20b964: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B498u, 0x20B960u, 0x20B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B968u;
label_20b968:
    // 0x20b968: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b96c: 0xc0a12fa  jal         func_284BE8
    ctx->pc = 0x20B96Cu;
    SET_GPR_U32(ctx, 31, 0x20B974u);
    ctx->pc = 0x20B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B96Cu;
    // 0x20b970: 0xaf82c8c8  sw          $v0, -0x3738($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284BE8u, 0x20B96Cu, 0x20B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B974u;
label_20b974:
    // 0x20b974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b97c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b97cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b988: 0x3e00008  jr          $ra
    ctx->pc = 0x20B988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B988u;
        // 0x20b98c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B990u;
}
