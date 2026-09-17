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

// Function: sub_0035FF90
// Address: 0x35ff90 - 0x360208
void sub_0035FF90_0x35ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FF90_0x35ff90");
#endif

    switch (ctx->pc) {
        case 0x35ffb4u: goto label_35ffb4;
        case 0x35ffc0u: goto label_35ffc0;
        case 0x360030u: goto label_360030;
        case 0x36004cu: goto label_36004c;
        case 0x36007cu: goto label_36007c;
        case 0x3600dcu: goto label_3600dc;
        case 0x360140u: goto label_360140;
        case 0x3601a0u: goto label_3601a0;
        case 0x3601e8u: goto label_3601e8;
        default: break;
    }

    ctx->pc = 0x35ff90u;

    // 0x35ff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ff94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35ff98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ff9c: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x35ff9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x35ffa0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35ffa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35ffa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ffa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ffac: 0xc0d8284  jal         func_360A10
    ctx->pc = 0x35FFACu;
    SET_GPR_U32(ctx, 31, 0x35FFB4u);
    ctx->pc = 0x35FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFACu;
    // 0x35ffb0: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360A10u, 0x35FFACu, 0x35FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFB4u;
label_35ffb4:
    // 0x35ffb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffb8: 0xc0d8284  jal         func_360A10
    ctx->pc = 0x35FFB8u;
    SET_GPR_U32(ctx, 31, 0x35FFC0u);
    ctx->pc = 0x35FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFB8u;
    // 0x35ffbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360A10u, 0x35FFB8u, 0x35FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFC0u;
label_35ffc0:
    // 0x35ffc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35ffc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffc4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x35ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35ffc8: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x35ffc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ffcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35FFCCu;
    {
        const bool branch_taken_0x35ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ffcc) {
            ctx->pc = 0x35FFF0u;
            goto label_35fff0;
        }
    }
    ctx->pc = 0x35FFD4u;
    // 0x35ffd4: 0x6210010  bgez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x35FFD4u;
    {
        const bool branch_taken_0x35ffd4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x35FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFD4u;
        // 0x35ffd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ffd4) {
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x35FFDCu;
    // 0x35ffdc: 0x2a22ffc1  slti        $v0, $s1, -0x3F
    ctx->pc = 0x35ffdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967233) ? 1 : 0);
    // 0x35ffe0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x35FFE0u;
    {
        const bool branch_taken_0x35ffe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ffe0) {
            ctx->pc = 0x35FFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FFE0u;
            // 0x35ffe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x35FFE8u;
    // 0x35ffe8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35FFE8u;
    {
        const bool branch_taken_0x35ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFE8u;
        // 0x35ffec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ffe8) {
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x35FFF0u;
label_35fff0:
    // 0x35fff0: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FFF0u;
    {
        const bool branch_taken_0x35fff0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x35FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFF0u;
        // 0x35fff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fff0) {
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x35FFF8u;
    // 0x35fff8: 0x2862ffc1  slti        $v0, $v1, -0x3F
    ctx->pc = 0x35fff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967233) ? 1 : 0);
    // 0x35fffc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FFFCu;
    {
        const bool branch_taken_0x35fffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFFCu;
        // 0x360000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fffc) {
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x360004u;
    // 0x360004: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x360004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x360008: 0x2c630040  sltiu       $v1, $v1, 0x40
    ctx->pc = 0x360008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x36000c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36000Cu;
    {
        const bool branch_taken_0x36000c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36000Cu;
        // 0x360010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36000c) {
            ctx->pc = 0x360018u;
            goto label_360018;
        }
    }
    ctx->pc = 0x360014u;
    // 0x360014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360018:
    // 0x360018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36001c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36001cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360024: 0x3e00008  jr          $ra
    ctx->pc = 0x360024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360024u;
        // 0x360028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36002Cu;
    // 0x36002c: 0x0  nop
    ctx->pc = 0x36002cu;
    // NOP
label_360030:
    // 0x360030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360034: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x360034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360038: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x360038u;
    {
        const bool branch_taken_0x360038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360038u;
        // 0x36003c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360038) {
            ctx->pc = 0x360058u;
            goto label_360058;
        }
    }
    ctx->pc = 0x360040u;
    // 0x360040: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x360040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x360044: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x360044u;
    SET_GPR_U32(ctx, 31, 0x36004Cu);
    ctx->pc = 0x360048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360044u;
    // 0x360048: 0x24846bc8  addiu       $a0, $a0, 0x6BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x360044u, 0x36004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36004Cu;
label_36004c:
    // 0x36004c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360050: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x360050u;
    {
        const bool branch_taken_0x360050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360050u;
        // 0x360054: 0x34420031  ori         $v0, $v0, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360050) {
            ctx->pc = 0x3601FCu;
            goto label_3601fc;
        }
    }
    ctx->pc = 0x360058u;
label_360058:
    // 0x360058: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x360058u;
    {
        const bool branch_taken_0x360058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360058u;
        // 0x36005c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360058) {
            ctx->pc = 0x360120u;
            goto label_360120;
        }
    }
    ctx->pc = 0x360060u;
    // 0x360060: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x360060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x360064: 0x2463bd80  addiu       $v1, $v1, -0x4280
    ctx->pc = 0x360064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950272));
    // 0x360068: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x360068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36006c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x360070: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x360070u;
    {
        const bool branch_taken_0x360070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360070u;
        // 0x360074: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360070) {
            ctx->pc = 0x3600D8u;
            goto label_3600d8;
        }
    }
    ctx->pc = 0x360078u;
    // 0x360078: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x360078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_36007c:
    // 0x36007c: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x36007cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x360080: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x360080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x360084: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x360084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x360088: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x360088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36008c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x36008cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x360090: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x360090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x360094: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x360094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x360098: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x360098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36009c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x36009cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600a0: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x3600a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600a4: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x3600a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600a8: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x3600a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600ac: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x3600acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600b0: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x3600b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600b4: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x3600b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600b8: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x3600b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3600bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3600bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3600c0: 0x0  nop
    ctx->pc = 0x3600c0u;
    // NOP
    // 0x3600c4: 0x0  nop
    ctx->pc = 0x3600c4u;
    // NOP
    // 0x3600c8: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3600C8u;
    {
        const bool branch_taken_0x3600c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3600CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600C8u;
        // 0x3600cc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600c8) {
            ctx->pc = 0x36007Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36007c;
        }
    }
    ctx->pc = 0x3600D0u;
    // 0x3600d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3600D0u;
    {
        const bool branch_taken_0x3600d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600D0u;
        // 0x3600d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600d0) {
            ctx->pc = 0x360114u;
            goto label_360114;
        }
    }
    ctx->pc = 0x3600D8u;
label_3600d8:
    // 0x3600d8: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x3600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_3600dc:
    // 0x3600dc: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x3600dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3600e0: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x3600e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3600e4: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x3600e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3600e8: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x3600e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3600ec: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3600ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3600f0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x3600f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x3600f4: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x3600f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x3600f8: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x3600f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x3600fc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3600fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x360100: 0x0  nop
    ctx->pc = 0x360100u;
    // NOP
    // 0x360104: 0x0  nop
    ctx->pc = 0x360104u;
    // NOP
    // 0x360108: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x360108u;
    {
        const bool branch_taken_0x360108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x36010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360108u;
        // 0x36010c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360108) {
            ctx->pc = 0x3600DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3600dc;
        }
    }
    ctx->pc = 0x360110u;
    // 0x360110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_360114:
    // 0x360114: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x360114u;
    {
        const bool branch_taken_0x360114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360114u;
        // 0x360118: 0xaf82c7e8  sw          $v0, -0x3818($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360114) {
            ctx->pc = 0x3601F8u;
            goto label_3601f8;
        }
    }
    ctx->pc = 0x36011Cu;
    // 0x36011c: 0x0  nop
    ctx->pc = 0x36011cu;
    // NOP
label_360120:
    // 0x360120: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x360120u;
    {
        const bool branch_taken_0x360120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x360120) {
            ctx->pc = 0x360124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360120u;
            // 0x360124: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3601E0u;
            goto label_3601e0;
        }
    }
    ctx->pc = 0x360128u;
    // 0x360128: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x360128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36012c: 0x2463bc80  addiu       $v1, $v1, -0x4380
    ctx->pc = 0x36012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
    // 0x360130: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x360130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x360134: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x360134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x360138: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x360138u;
    {
        const bool branch_taken_0x360138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360138u;
        // 0x36013c: 0x24820100  addiu       $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360138) {
            ctx->pc = 0x3601A0u;
            goto label_3601a0;
        }
    }
    ctx->pc = 0x360140u;
label_360140:
    // 0x360140: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x360140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x360144: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x360144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x360148: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x360148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36014c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x36014cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x360150: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x360150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x360154: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x360154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x360158: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x360158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36015c: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x36015cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x360160: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x360160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360164: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x360164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360168: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x360168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36016c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x36016cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360170: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x360170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360174: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x360174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360178: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x360178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36017c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x36017cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x360180: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x360180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x360184: 0x0  nop
    ctx->pc = 0x360184u;
    // NOP
    // 0x360188: 0x0  nop
    ctx->pc = 0x360188u;
    // NOP
    // 0x36018c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x36018Cu;
    {
        const bool branch_taken_0x36018c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x360190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36018Cu;
        // 0x360190: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36018c) {
            ctx->pc = 0x360140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360140;
        }
    }
    ctx->pc = 0x360194u;
    // 0x360194: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x360194u;
    {
        const bool branch_taken_0x360194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360194u;
        // 0x360198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360194) {
            ctx->pc = 0x3601FCu;
            goto label_3601fc;
        }
    }
    ctx->pc = 0x36019Cu;
    // 0x36019c: 0x0  nop
    ctx->pc = 0x36019cu;
    // NOP
label_3601a0:
    // 0x3601a0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x3601a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3601a4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x3601a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3601a8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x3601a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3601ac: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x3601acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3601b0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x3601b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x3601b4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x3601b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x3601b8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x3601b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x3601bc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x3601bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x3601c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3601c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3601c4: 0x0  nop
    ctx->pc = 0x3601c4u;
    // NOP
    // 0x3601c8: 0x0  nop
    ctx->pc = 0x3601c8u;
    // NOP
    // 0x3601cc: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3601CCu;
    {
        const bool branch_taken_0x3601cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3601D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601CCu;
        // 0x3601d0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601cc) {
            ctx->pc = 0x3601A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3601a0;
        }
    }
    ctx->pc = 0x3601D4u;
    // 0x3601d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3601D4u;
    {
        const bool branch_taken_0x3601d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3601D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601D4u;
        // 0x3601d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601d4) {
            ctx->pc = 0x3601FCu;
            goto label_3601fc;
        }
    }
    ctx->pc = 0x3601DCu;
    // 0x3601dc: 0x0  nop
    ctx->pc = 0x3601dcu;
    // NOP
label_3601e0:
    // 0x3601e0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3601E0u;
    SET_GPR_U32(ctx, 31, 0x3601E8u);
    ctx->pc = 0x3601E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601E0u;
    // 0x3601e4: 0x24846c08  addiu       $a0, $a0, 0x6C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3601E0u, 0x3601E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601E8u;
label_3601e8:
    // 0x3601e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3601ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3601ECu;
    {
        const bool branch_taken_0x3601ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601ECu;
        // 0x3601f0: 0x3442002e  ori         $v0, $v0, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601ec) {
            ctx->pc = 0x3601FCu;
            goto label_3601fc;
        }
    }
    ctx->pc = 0x3601F4u;
    // 0x3601f4: 0x0  nop
    ctx->pc = 0x3601f4u;
    // NOP
label_3601f8:
    // 0x3601f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3601f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3601fc:
    // 0x3601fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3601fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360200: 0x3e00008  jr          $ra
    ctx->pc = 0x360200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360200u;
        // 0x360204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360208u;
}
