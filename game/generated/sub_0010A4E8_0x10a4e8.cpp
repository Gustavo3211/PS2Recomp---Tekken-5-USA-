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

// Function: sub_0010A4E8
// Address: 0x10a4e8 - 0x10a5d0
void sub_0010A4E8_0x10a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A4E8_0x10a4e8");
#endif

    switch (ctx->pc) {
        case 0x10a500u: goto label_10a500;
        case 0x10a510u: goto label_10a510;
        case 0x10a534u: goto label_10a534;
        case 0x10a540u: goto label_10a540;
        case 0x10a550u: goto label_10a550;
        case 0x10a578u: goto label_10a578;
        case 0x10a584u: goto label_10a584;
        case 0x10a598u: goto label_10a598;
        case 0x10a5a4u: goto label_10a5a4;
        default: break;
    }

    ctx->pc = 0x10a4e8u;

    // 0x10a4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a4ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a4f8: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A4F8u;
    SET_GPR_U32(ctx, 31, 0x10A500u);
    ctx->pc = 0x10A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4F8u;
    // 0x10a4fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A4F8u, 0x10A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A500u;
label_10a500:
    // 0x10a500: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A500u;
    {
        const bool branch_taken_0x10a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A500u;
        // 0x10a504: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a500) {
            ctx->pc = 0x10A534u;
            goto label_10a534;
        }
    }
    ctx->pc = 0x10A508u;
    // 0x10a508: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A508u;
    SET_GPR_U32(ctx, 31, 0x10A510u);
    ctx->pc = 0x10A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A508u;
    // 0x10a50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A508u, 0x10A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A510u;
label_10a510:
    // 0x10a510: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a514: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x10a514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x10a518: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a520: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a520u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10a524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a528: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x10a528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x10a52c: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A52Cu;
    SET_GPR_U32(ctx, 31, 0x10A534u);
    ctx->pc = 0x10A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A52Cu;
    // 0x10a530: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A52Cu, 0x10A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A534u;
label_10a534:
    // 0x10a534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a538: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A538u;
    SET_GPR_U32(ctx, 31, 0x10A540u);
    ctx->pc = 0x10A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A538u;
    // 0x10a53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A538u, 0x10A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A540u;
label_10a540:
    // 0x10a540: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A540u;
    {
        const bool branch_taken_0x10a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A540u;
        // 0x10a544: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a540) {
            ctx->pc = 0x10A578u;
            goto label_10a578;
        }
    }
    ctx->pc = 0x10A548u;
    // 0x10a548: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A548u;
    SET_GPR_U32(ctx, 31, 0x10A550u);
    ctx->pc = 0x10A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A548u;
    // 0x10a54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A548u, 0x10A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A550u;
label_10a550:
    // 0x10a550: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a554: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x10a554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10a558: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a55c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x10a560: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a560u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10a564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a568: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x10a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x10a56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a570: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A570u;
    SET_GPR_U32(ctx, 31, 0x10A578u);
    ctx->pc = 0x10A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A570u;
    // 0x10a574: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A570u, 0x10A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A578u;
label_10a578:
    // 0x10a578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a57c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A57Cu;
    SET_GPR_U32(ctx, 31, 0x10A584u);
    ctx->pc = 0x10A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A57Cu;
    // 0x10a580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A57Cu, 0x10A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A584u;
label_10a584:
    // 0x10a584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A584u;
    {
        const bool branch_taken_0x10a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A584u;
        // 0x10a588: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a584) {
            ctx->pc = 0x10A598u;
            goto label_10a598;
        }
    }
    ctx->pc = 0x10A58Cu;
    // 0x10a58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a590: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x10A590u;
    SET_GPR_U32(ctx, 31, 0x10A598u);
    ctx->pc = 0x10A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A590u;
    // 0x10a594: 0x24a5db98  addiu       $a1, $a1, -0x2468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x10A590u, 0x10A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A598u;
label_10a598:
    // 0x10a598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a59c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A59Cu;
    SET_GPR_U32(ctx, 31, 0x10A5A4u);
    ctx->pc = 0x10A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A59Cu;
    // 0x10a5a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A59Cu, 0x10A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5A4u;
label_10a5a4:
    // 0x10a5a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A5A4u;
    {
        const bool branch_taken_0x10a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5A4u;
        // 0x10a5a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5a4) {
            ctx->pc = 0x10A5C4u;
            goto label_10a5c4;
        }
    }
    ctx->pc = 0x10A5ACu;
    // 0x10a5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5b0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x10a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x10a5b4: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x10a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    // 0x10a5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a5bc: 0x80417dc  j           func_105F70
    ctx->pc = 0x10A5BCu;
    ctx->pc = 0x10A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5BCu;
    // 0x10a5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    sub_00105F70_0x105f70(rdram, ctx, runtime); return;
    ctx->pc = 0x10A5C4u;
label_10a5c4:
    // 0x10a5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5C8u;
        // 0x10a5cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A5D0u;
}
