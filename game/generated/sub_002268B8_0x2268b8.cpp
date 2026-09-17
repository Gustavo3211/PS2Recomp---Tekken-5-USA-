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

// Function: sub_002268B8
// Address: 0x2268b8 - 0x226a18
void sub_002268B8_0x2268b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002268B8_0x2268b8");
#endif

    switch (ctx->pc) {
        case 0x226914u: goto label_226914;
        case 0x226948u: goto label_226948;
        case 0x22696cu: goto label_22696c;
        case 0x22697cu: goto label_22697c;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269c8u: goto label_2269c8;
        case 0x2269e0u: goto label_2269e0;
        case 0x2269f0u: goto label_2269f0;
        case 0x226a00u: goto label_226a00;
        default: break;
    }

    ctx->pc = 0x2268b8u;

    // 0x2268b8: 0x8f83a4ec  lw          $v1, -0x5B14($gp)
    ctx->pc = 0x2268b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943980)));
    // 0x2268bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2268bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2268c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2268c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2268c4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2268c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2268c8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2268C8u;
    {
        const bool branch_taken_0x2268c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268C8u;
        // 0x2268cc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268c8) {
            ctx->pc = 0x226A24u;
            return;
        }
    }
    ctx->pc = 0x2268D0u;
    // 0x2268d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2268d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2268d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2268dc: 0x8c637100  lw          $v1, 0x7100($v1)
    ctx->pc = 0x2268dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28928)));
    // 0x2268e0: 0x600008  jr          $v1
    ctx->pc = 0x2268E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2268E8u: goto label_2268e8;
            case 0x226950u: goto label_226950;
            case 0x226990u: goto label_226990;
            case 0x2269A0u: goto label_2269a0;
            case 0x2269E8u: goto label_2269e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2268E8u;
label_2268e8:
    // 0x2268e8: 0x2790a4ec  addiu       $s0, $gp, -0x5B14
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943980));
    // 0x2268ec: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2268ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2268f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2268f4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2268f8: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2268fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x226904: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x226904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x226908: 0x8cc28880  lw          $v0, -0x7780($a2)
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x22690c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22690Cu;
    SET_GPR_U32(ctx, 31, 0x226914u);
    ctx->pc = 0x226910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22690Cu;
    // 0x226910: 0xaf82a4f0  sw          $v0, -0x5B10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22690Cu, 0x226914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226914u;
label_226914:
    // 0x226914: 0x24450068  addiu       $a1, $v0, 0x68
    ctx->pc = 0x226914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x226918: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x226918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22691c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22691Cu;
    {
        const bool branch_taken_0x22691c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22691c) {
            ctx->pc = 0x226920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22691Cu;
            // 0x226920: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226938u;
            goto label_226938;
        }
    }
    ctx->pc = 0x226924u;
    // 0x226924: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x226924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226928: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22692c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22692Cu;
    {
        const bool branch_taken_0x22692c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22692c) {
            ctx->pc = 0x226940u;
            goto label_226940;
        }
    }
    ctx->pc = 0x226934u;
    // 0x226934: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226938:
    // 0x226938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22693c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22693cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226940:
    // 0x226940: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x226940u;
    SET_GPR_U32(ctx, 31, 0x226948u);
    ctx->pc = 0x226944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226940u;
    // 0x226944: 0x8f85a4f0  lw          $a1, -0x5B10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x226940u, 0x226948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226948u;
label_226948:
    // 0x226948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226948u;
    {
        const bool branch_taken_0x226948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226948u;
        // 0x22694c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226948) {
            ctx->pc = 0x226958u;
            goto label_226958;
        }
    }
    ctx->pc = 0x226950u;
label_226950:
    // 0x226950: 0x2790a4ec  addiu       $s0, $gp, -0x5B14
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943980));
    // 0x226954: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_226958:
    // 0x226958: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22695c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226960: 0x248473c8  addiu       $a0, $a0, 0x73C8
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    // 0x226964: 0xc089754  jal         func_225D50
    ctx->pc = 0x226964u;
    SET_GPR_U32(ctx, 31, 0x22696Cu);
    ctx->pc = 0x226968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226964u;
    // 0x226968: 0xac40909c  sw          $zero, -0x6F64($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938780), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D50u, 0x226964u, 0x22696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22696Cu;
label_22696c:
    // 0x22696c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22696cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226974: 0xc089754  jal         func_225D50
    ctx->pc = 0x226974u;
    SET_GPR_U32(ctx, 31, 0x22697Cu);
    ctx->pc = 0x226978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226974u;
    // 0x226978: 0x248473e8  addiu       $a0, $a0, 0x73E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D50u, 0x226974u, 0x22697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22697Cu;
label_22697c:
    // 0x22697c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226984u;
    {
        const bool branch_taken_0x226984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226984u;
        // 0x226988: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226984) {
            ctx->pc = 0x226994u;
            goto label_226994;
        }
    }
    ctx->pc = 0x22698Cu;
    // 0x22698c: 0x0  nop
    ctx->pc = 0x22698cu;
    // NOP
label_226990:
    // 0x226990: 0x2790a4ec  addiu       $s0, $gp, -0x5B14
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943980));
label_226994:
    // 0x226994: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x226994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22699c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22699cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2269a0:
    // 0x2269a0: 0xc0899dc  jal         func_226770
    ctx->pc = 0x2269A0u;
    SET_GPR_U32(ctx, 31, 0x2269A8u);
    ctx->pc = 0x2269A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269A0u;
    // 0x2269a4: 0x8f90a4f0  lw          $s0, -0x5B10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226770u, 0x2269A0u, 0x2269A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269A8u;
label_2269a8:
    // 0x2269a8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2269A8u;
    {
        const bool branch_taken_0x2269a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2269a8) {
            ctx->pc = 0x2269ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2269A8u;
            // 0x2269ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226A28u;
            return;
        }
    }
    ctx->pc = 0x2269B0u;
    // 0x2269b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2269b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2269b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269b8: 0x248473c8  addiu       $a0, $a0, 0x73C8
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    // 0x2269bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2269bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269c0: 0xc089784  jal         func_225E10
    ctx->pc = 0x2269C0u;
    SET_GPR_U32(ctx, 31, 0x2269C8u);
    ctx->pc = 0x2269C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269C0u;
    // 0x2269c4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E10u, 0x2269C0u, 0x2269C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269C8u;
label_2269c8:
    // 0x2269c8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2269cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2269ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269d0: 0x248473e8  addiu       $a0, $a0, 0x73E8
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29672));
    // 0x2269d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2269d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269d8: 0xc089784  jal         func_225E10
    ctx->pc = 0x2269D8u;
    SET_GPR_U32(ctx, 31, 0x2269E0u);
    ctx->pc = 0x2269DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269D8u;
    // 0x2269dc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E10u, 0x2269D8u, 0x2269E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269E0u;
label_2269e0:
    // 0x2269e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2269E0u;
    {
        const bool branch_taken_0x2269e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269e0) {
            ctx->pc = 0x226A00u;
            goto label_226a00;
        }
    }
    ctx->pc = 0x2269E8u;
label_2269e8:
    // 0x2269e8: 0xc0899dc  jal         func_226770
    ctx->pc = 0x2269E8u;
    SET_GPR_U32(ctx, 31, 0x2269F0u);
    ctx->pc = 0x226770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226770u, 0x2269E8u, 0x2269F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269F0u;
label_2269f0:
    // 0x2269f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2269F0u;
    {
        const bool branch_taken_0x2269f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269F0u;
        // 0x2269f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269f0) {
            ctx->pc = 0x226A28u;
            return;
        }
    }
    ctx->pc = 0x2269F8u;
    // 0x2269f8: 0xc093724  jal         func_24DC90
    ctx->pc = 0x2269F8u;
    SET_GPR_U32(ctx, 31, 0x226A00u);
    ctx->pc = 0x24DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC90u, 0x2269F8u, 0x226A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A00u;
label_226a00:
    // 0x226a00: 0x2783a4ec  addiu       $v1, $gp, -0x5B14
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943980));
    // 0x226a04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226A0Cu;
    {
        const bool branch_taken_0x226a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A0Cu;
        // 0x226a10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a0c) {
            ctx->pc = 0x226A24u;
            return;
        }
    }
    ctx->pc = 0x226A14u;
    // 0x226a14: 0x0  nop
    ctx->pc = 0x226a14u;
    // NOP
    ctx->pc = 0x226a18u;
}
