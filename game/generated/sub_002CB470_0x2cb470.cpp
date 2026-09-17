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

// Function: sub_002CB470
// Address: 0x2cb470 - 0x2cb530
void sub_002CB470_0x2cb470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB470_0x2cb470");
#endif

    switch (ctx->pc) {
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb51cu: goto label_2cb51c;
        default: break;
    }

    ctx->pc = 0x2cb470u;

    // 0x2cb470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb474: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x2cb474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x2cb478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb47c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cb47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb484: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb488: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CB488u;
    {
        const bool branch_taken_0x2cb488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB488u;
        // 0x2cb48c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb488) {
            ctx->pc = 0x2CB51Cu;
            goto label_2cb51c;
        }
    }
    ctx->pc = 0x2CB490u;
    // 0x2cb490: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x2cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2cb494: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB494u;
    {
        const bool branch_taken_0x2cb494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB494u;
        // 0x2cb498: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb494) {
            ctx->pc = 0x2CB4D8u;
            goto label_2cb4d8;
        }
    }
    ctx->pc = 0x2CB49Cu;
    // 0x2cb49c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB49Cu;
    {
        const bool branch_taken_0x2cb49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB49Cu;
        // 0x2cb4a0: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb49c) {
            ctx->pc = 0x2CB4B0u;
            goto label_2cb4b0;
        }
    }
    ctx->pc = 0x2CB4A4u;
    // 0x2cb4a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CB4A4u;
    {
        const bool branch_taken_0x2cb4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A4u;
        // 0x2cb4a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4a4) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4ACu;
    // 0x2cb4ac: 0x0  nop
    ctx->pc = 0x2cb4acu;
    // NOP
label_2cb4b0:
    // 0x2cb4b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB4B0u;
    {
        const bool branch_taken_0x2cb4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B0u;
        // 0x2cb4b4: 0x30c21000  andi        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4b0) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4B8u;
    // 0x2cb4b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CB4B8u;
    {
        const bool branch_taken_0x2cb4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4b8) {
            ctx->pc = 0x2CB4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB4B8u;
            // 0x2cb4bc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4C0u;
    // 0x2cb4c0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2cb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2cb4c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CB4C4u;
    {
        const bool branch_taken_0x2cb4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4c4) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4CCu;
    // 0x2cb4cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CB4CCu;
    {
        const bool branch_taken_0x2cb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4CCu;
        // 0x2cb4d0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4cc) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4D4u;
    // 0x2cb4d4: 0x0  nop
    ctx->pc = 0x2cb4d4u;
    // NOP
label_2cb4d8:
    // 0x2cb4d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB4D8u;
    {
        const bool branch_taken_0x2cb4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4D8u;
        // 0x2cb4dc: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4d8) {
            ctx->pc = 0x2CB4E8u;
            goto label_2cb4e8;
        }
    }
    ctx->pc = 0x2CB4E0u;
    // 0x2cb4e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB4E0u;
    {
        const bool branch_taken_0x2cb4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4E0u;
        // 0x2cb4e4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4e0) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4E8u;
label_2cb4e8:
    // 0x2cb4e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB4E8u;
    {
        const bool branch_taken_0x2cb4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4e8) {
            ctx->pc = 0x2CB4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB4E8u;
            // 0x2cb4ec: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4F0u;
    // 0x2cb4f0: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x2cb4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x2cb4f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB4F4u;
    {
        const bool branch_taken_0x2cb4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4F4u;
        // 0x2cb4f8: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4f4) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4FCu;
    // 0x2cb4fc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cb500:
    // 0x2cb500: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x2CB500u;
    SET_GPR_U32(ctx, 31, 0x2CB508u);
    ctx->pc = 0x2CB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB500u;
    // 0x2cb504: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x2CB500u, 0x2CB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB508u;
label_2cb508:
    // 0x2cb508: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cb50c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cb510: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2cb510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cb514: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CB514u;
    SET_GPR_U32(ctx, 31, 0x2CB51Cu);
    ctx->pc = 0x2CB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB514u;
    // 0x2cb518: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CB514u, 0x2CB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB51Cu;
label_2cb51c:
    // 0x2cb51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb528: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB528u;
        // 0x2cb52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB530u;
}
