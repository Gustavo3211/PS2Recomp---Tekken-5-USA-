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

// Function: sub_0011BCA8
// Address: 0x11bca8 - 0x11bfc8
void sub_0011BCA8_0x11bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BCA8_0x11bca8");
#endif

    switch (ctx->pc) {
        case 0x11bce8u: goto label_11bce8;
        case 0x11bcf4u: goto label_11bcf4;
        case 0x11bd14u: goto label_11bd14;
        case 0x11bd24u: goto label_11bd24;
        case 0x11bd40u: goto label_11bd40;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd68u: goto label_11bd68;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bd9cu: goto label_11bd9c;
        case 0x11bda8u: goto label_11bda8;
        case 0x11be08u: goto label_11be08;
        case 0x11be5cu: goto label_11be5c;
        case 0x11be78u: goto label_11be78;
        case 0x11bea0u: goto label_11bea0;
        case 0x11beb4u: goto label_11beb4;
        case 0x11bf28u: goto label_11bf28;
        case 0x11bf40u: goto label_11bf40;
        case 0x11bf58u: goto label_11bf58;
        case 0x11bf70u: goto label_11bf70;
        case 0x11bfb8u: goto label_11bfb8;
        default: break;
    }

    ctx->pc = 0x11bca8u;

label_11bca8:
    // 0x11bca8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11bcac: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x11bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x11bcb0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11bcb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11bcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcb8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x11bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x11bcbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11bcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcc0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11bcc4: 0x3c160013  lui         $s6, 0x13
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)19 << 16));
    // 0x11bcc8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x11bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x11bccc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x11bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x11bcd0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x11bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x11bcd4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11bcd8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11bcdc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11bce0: 0xc046e74  jal         func_11B9D0
    ctx->pc = 0x11BCE0u;
    SET_GPR_U32(ctx, 31, 0x11BCE8u);
    ctx->pc = 0x11BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCE0u;
    // 0x11bce4: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9D0u, 0x11BCE0u, 0x11BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCE8u;
label_11bce8:
    // 0x11bce8: 0x8ec427e8  lw          $a0, 0x27E8($s6)
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10216)));
    // 0x11bcec: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x11BCECu;
    SET_GPR_U32(ctx, 31, 0x11BCF4u);
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x11BCECu, 0x11BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCF4u;
label_11bcf4:
    // 0x11bcf4: 0x8ec327e8  lw          $v1, 0x27E8($s6)
    ctx->pc = 0x11bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10216)));
    // 0x11bcf8: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x11BCF8u;
    {
        const bool branch_taken_0x11bcf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF8u;
        // 0x11bcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf8) {
            ctx->pc = 0x11BF74u;
            goto label_11bf74;
        }
    }
    ctx->pc = 0x11BD00u;
    // 0x11bd00: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11bd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bd08: 0xac6227dc  sw          $v0, 0x27DC($v1)
    ctx->pc = 0x11bd08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1327DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1327DCu, _value); } while (0);
    // 0x11bd0c: 0xc04706e  jal         func_11C1B8
    ctx->pc = 0x11BD0Cu;
    SET_GPR_U32(ctx, 31, 0x11BD14u);
    ctx->pc = 0x11BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD0Cu;
    // 0x11bd10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1B8u, 0x11BD0Cu, 0x11BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD14u;
label_11bd14:
    // 0x11bd14: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11BD14u;
    {
        const bool branch_taken_0x11bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD14u;
        // 0x11bd18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd14) {
            ctx->pc = 0x11BEA8u;
            goto label_11bea8;
        }
    }
    ctx->pc = 0x11BD1Cu;
    // 0x11bd1c: 0xc0449ca  jal         func_112728
    ctx->pc = 0x11BD1Cu;
    SET_GPR_U32(ctx, 31, 0x11BD24u);
    ctx->pc = 0x11BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD1Cu;
    // 0x11bd20: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x11BD1Cu, 0x11BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD24u;
label_11bd24:
    // 0x11bd24: 0x8e22280c  lw          $v0, 0x280C($s1)
    ctx->pc = 0x11bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10252)));
    // 0x11bd28: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11BD28u;
    {
        const bool branch_taken_0x11bd28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD28u;
        // 0x11bd2c: 0x3c17001f  lui         $s7, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd28) {
            ctx->pc = 0x11BDDCu;
            goto label_11bddc;
        }
    }
    ctx->pc = 0x11BD30u;
    // 0x11bd30: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x11bd30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
    // 0x11bd34: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x11bd38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11BD38u;
    {
        const bool branch_taken_0x11bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD38u;
        // 0x11bd3c: 0x3c1e001f  lui         $fp, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd38) {
            ctx->pc = 0x11BD64u;
            goto label_11bd64;
        }
    }
    ctx->pc = 0x11BD40u;
label_11bd40:
    // 0x11bd40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bd44: 0x0  nop
    ctx->pc = 0x11bd44u;
    // NOP
label_11bd48:
    // 0x11bd48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11bd4c: 0x0  nop
    ctx->pc = 0x11bd4cu;
    // NOP
    // 0x11bd50: 0x0  nop
    ctx->pc = 0x11bd50u;
    // NOP
    // 0x11bd54: 0x0  nop
    ctx->pc = 0x11bd54u;
    // NOP
    // 0x11bd58: 0x0  nop
    ctx->pc = 0x11bd58u;
    // NOP
    // 0x11bd5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BD5Cu;
    {
        const bool branch_taken_0x11bd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bd5c) {
            ctx->pc = 0x11BD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd48;
        }
    }
    ctx->pc = 0x11BD64u;
label_11bd64:
    // 0x11bd64: 0x26f0fa40  addiu       $s0, $s7, -0x5C0
    ctx->pc = 0x11bd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965824));
label_11bd68:
    // 0x11bd68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd70: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x11bd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x11bd74: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x11BD74u;
    SET_GPR_U32(ctx, 31, 0x11BD7Cu);
    ctx->pc = 0x11BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD74u;
    // 0x11bd78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x11BD74u, 0x11BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11BD7Cu;
    {
        const bool branch_taken_0x11bd7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11bd7c) {
            ctx->pc = 0x11BD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD7Cu;
            // 0x11bd80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BDCCu;
            goto label_11bdcc;
        }
    }
    ctx->pc = 0x11BD84u;
    // 0x11bd84: 0x8e8227d0  lw          $v0, 0x27D0($s4)
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
    // 0x11bd88: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BD88u;
    {
        const bool branch_taken_0x11bd88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD88u;
        // 0x11bd8c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd88) {
            ctx->pc = 0x11BDA0u;
            goto label_11bda0;
        }
    }
    ctx->pc = 0x11BD90u;
    // 0x11bd90: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11bd94: 0xc044794  jal         func_111E50
    ctx->pc = 0x11BD94u;
    SET_GPR_U32(ctx, 31, 0x11BD9Cu);
    ctx->pc = 0x11BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD94u;
    // 0x11bd98: 0x2484e5d0  addiu       $a0, $a0, -0x1A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11BD94u, 0x11BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD9Cu;
label_11bd9c:
    // 0x11bd9c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11bda0:
    // 0x11bda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bda4: 0x0  nop
    ctx->pc = 0x11bda4u;
    // NOP
label_11bda8:
    // 0x11bda8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11bdac: 0x0  nop
    ctx->pc = 0x11bdacu;
    // NOP
    // 0x11bdb0: 0x0  nop
    ctx->pc = 0x11bdb0u;
    // NOP
    // 0x11bdb4: 0x0  nop
    ctx->pc = 0x11bdb4u;
    // NOP
    // 0x11bdb8: 0x0  nop
    ctx->pc = 0x11bdb8u;
    // NOP
    // 0x11bdbc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BDBCu;
    {
        const bool branch_taken_0x11bdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bdbc) {
            ctx->pc = 0x11BDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bda8;
        }
    }
    ctx->pc = 0x11BDC4u;
    // 0x11bdc4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11BDC4u;
    {
        const bool branch_taken_0x11bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDC4u;
        // 0x11bdc8: 0x26f0fa40  addiu       $s0, $s7, -0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc4) {
            ctx->pc = 0x11BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd68;
        }
    }
    ctx->pc = 0x11BDCCu;
label_11bdcc:
    // 0x11bdcc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11BDCCu;
    {
        const bool branch_taken_0x11bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDCCu;
        // 0x11bdd0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdcc) {
            ctx->pc = 0x11BD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd40;
        }
    }
    ctx->pc = 0x11BDD4u;
    // 0x11bdd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BDD4u;
    {
        const bool branch_taken_0x11bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDD4u;
        // 0x11bdd8: 0xae20280c  sw          $zero, 0x280C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdd4) {
            ctx->pc = 0x11BDE8u;
            goto label_11bde8;
        }
    }
    ctx->pc = 0x11BDDCu;
label_11bddc:
    // 0x11bddc: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x11bddcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
    // 0x11bde0: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11bde0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x11bde4: 0x3c1e001f  lui         $fp, 0x1F
    ctx->pc = 0x11bde4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
label_11bde8:
    // 0x11bde8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x11bde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11bdec: 0x26a4f8c0  addiu       $a0, $s5, -0x740
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965440));
    // 0x11bdf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdf4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11bdf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11BDF8u;
    {
        const bool branch_taken_0x11bdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDF8u;
        // 0x11bdfc: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf8) {
            ctx->pc = 0x11BE2Cu;
            goto label_11be2c;
        }
    }
    ctx->pc = 0x11BE00u;
    // 0x11be00: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x11be00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x11be04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11be08:
    // 0x11be08: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x11be08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11be0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BE0Cu;
    {
        const bool branch_taken_0x11be0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE0Cu;
        // 0x11be10: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be0c) {
            ctx->pc = 0x11BE2Cu;
            goto label_11be2c;
        }
    }
    ctx->pc = 0x11BE14u;
    // 0x11be14: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x11be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11be18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11be18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11be1c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11be1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11be20: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x11be20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11be24: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11BE24u;
    {
        const bool branch_taken_0x11be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11be24) {
            ctx->pc = 0x11BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BE24u;
            // 0x11be28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11be08;
        }
    }
    ctx->pc = 0x11BE2Cu;
label_11be2c:
    // 0x11be2c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11be30: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BE30u;
    {
        const bool branch_taken_0x11be30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE30u;
        // 0x11be34: 0x8e8227d0  lw          $v0, 0x27D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be30) {
            ctx->pc = 0x11BE44u;
            goto label_11be44;
        }
    }
    ctx->pc = 0x11BE38u;
    // 0x11be38: 0x26a2f8c0  addiu       $v0, $s5, -0x740
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965440));
    // 0x11be3c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x11be3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x11be40: 0x8e8227d0  lw          $v0, 0x27D0($s4)
    ctx->pc = 0x11be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
label_11be44:
    // 0x11be44: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BE44u;
    {
        const bool branch_taken_0x11be44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE44u;
        // 0x11be48: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be44) {
            ctx->pc = 0x11BE5Cu;
            goto label_11be5c;
        }
    }
    ctx->pc = 0x11BE4Cu;
    // 0x11be4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11be50: 0x2484e5f0  addiu       $a0, $a0, -0x1A10
    ctx->pc = 0x11be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960624));
    // 0x11be54: 0xc044794  jal         func_111E50
    ctx->pc = 0x11BE54u;
    SET_GPR_U32(ctx, 31, 0x11BE5Cu);
    ctx->pc = 0x11BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE54u;
    // 0x11be58: 0x24a5f8e4  addiu       $a1, $a1, -0x71C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11BE54u, 0x11BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE5Cu;
label_11be5c:
    // 0x11be5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11be60: 0x26b0f8c0  addiu       $s0, $s5, -0x740
    ctx->pc = 0x11be60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965440));
    // 0x11be64: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x11be64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11be68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be6c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x11be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x11be70: 0xc04499e  jal         func_112678
    ctx->pc = 0x11BE70u;
    SET_GPR_U32(ctx, 31, 0x11BE78u);
    ctx->pc = 0x11BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE70u;
    // 0x11be74: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x11BE70u, 0x11BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE78u;
label_11be78:
    // 0x11be78: 0x26e4fa40  addiu       $a0, $s7, -0x5C0
    ctx->pc = 0x11be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965824));
    // 0x11be7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11be80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11be84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11be88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be8c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11be90: 0x27c9fa00  addiu       $t1, $fp, -0x600
    ctx->pc = 0x11be90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965760));
    // 0x11be94: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11be94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11be98: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11BE98u;
    SET_GPR_U32(ctx, 31, 0x11BEA0u);
    ctx->pc = 0x11BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE98u;
    // 0x11be9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x11BE98u, 0x11BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEA0u;
label_11bea0:
    // 0x11bea0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BEA0u;
    {
        const bool branch_taken_0x11bea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEA0u;
        // 0x11bea4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bea0) {
            ctx->pc = 0x11BEBCu;
            goto label_11bebc;
        }
    }
    ctx->pc = 0x11BEA8u;
label_11bea8:
    // 0x11bea8: 0x8ec427e8  lw          $a0, 0x27E8($s6)
    ctx->pc = 0x11bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10216)));
    // 0x11beac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11BEACu;
    SET_GPR_U32(ctx, 31, 0x11BEB4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11BEACu, 0x11BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEB4u;
label_11beb4:
    // 0x11beb4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11BEB4u;
    {
        const bool branch_taken_0x11beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEB4u;
        // 0x11beb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beb4) {
            ctx->pc = 0x11BF74u;
            goto label_11bf74;
        }
    }
    ctx->pc = 0x11BEBCu;
label_11bebc:
    // 0x11bebc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11bec0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x11bec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11bec4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x11bec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11bec8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x11bec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11becc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x11beccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11bed0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x11bed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11bed4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x11bed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11bed8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x11bed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11bedc: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11bedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11bee0: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x11bee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bee4: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x11bee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bee8: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x11bee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11beec: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x11beecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bef0: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x11bef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bef4: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x11bef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bef8: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x11bef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11befc: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x11befcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bf00: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x11bf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11bf04: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x11bf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11bf08: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x11bf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11bf0c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x11bf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11bf10: 0x8e8327d0  lw          $v1, 0x27D0($s4)
    ctx->pc = 0x11bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
    // 0x11bf14: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11BF14u;
    {
        const bool branch_taken_0x11bf14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF14u;
        // 0x11bf18: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf14) {
            ctx->pc = 0x11BF58u;
            goto label_11bf58;
        }
    }
    ctx->pc = 0x11BF1Cu;
    // 0x11bf1c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11bf20: 0xc044794  jal         func_111E50
    ctx->pc = 0x11BF20u;
    SET_GPR_U32(ctx, 31, 0x11BF28u);
    ctx->pc = 0x11BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF20u;
    // 0x11bf24: 0x2484e608  addiu       $a0, $a0, -0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11BF20u, 0x11BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF28u;
label_11bf28:
    // 0x11bf28: 0x8e8227d0  lw          $v0, 0x27D0($s4)
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
    // 0x11bf2c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11BF2Cu;
    {
        const bool branch_taken_0x11bf2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF2Cu;
        // 0x11bf30: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf2c) {
            ctx->pc = 0x11BF58u;
            goto label_11bf58;
        }
    }
    ctx->pc = 0x11BF34u;
    // 0x11bf34: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11bf38: 0xc044794  jal         func_111E50
    ctx->pc = 0x11BF38u;
    SET_GPR_U32(ctx, 31, 0x11BF40u);
    ctx->pc = 0x11BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF38u;
    // 0x11bf3c: 0x2484e618  addiu       $a0, $a0, -0x19E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11BF38u, 0x11BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF40u;
label_11bf40:
    // 0x11bf40: 0x8e8227d0  lw          $v0, 0x27D0($s4)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10192)));
    // 0x11bf44: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BF44u;
    {
        const bool branch_taken_0x11bf44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF44u;
        // 0x11bf48: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf44) {
            ctx->pc = 0x11BF58u;
            goto label_11bf58;
        }
    }
    ctx->pc = 0x11BF4Cu;
    // 0x11bf4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x11bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11bf50: 0xc044794  jal         func_111E50
    ctx->pc = 0x11BF50u;
    SET_GPR_U32(ctx, 31, 0x11BF58u);
    ctx->pc = 0x11BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF50u;
    // 0x11bf54: 0x2484e628  addiu       $a0, $a0, -0x19D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11BF50u, 0x11BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF58u;
label_11bf58:
    // 0x11bf58: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11bf5c: 0x27c2fa00  addiu       $v0, $fp, -0x600
    ctx->pc = 0x11bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965760));
    // 0x11bf60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11bf64: 0x8ec427e8  lw          $a0, 0x27E8($s6)
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10216)));
    // 0x11bf68: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11BF68u;
    SET_GPR_U32(ctx, 31, 0x11BF70u);
    ctx->pc = 0x11BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF68u;
    // 0x11bf6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11BF68u, 0x11BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF70u;
label_11bf70:
    // 0x11bf70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11bf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bf74:
    // 0x11bf74: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11bf78: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x11bf78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11bf7c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x11bf7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11bf80: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x11bf80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11bf84: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11bf88: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11bf88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bf8c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x11bf8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bf90: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11bf90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bf94: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11bf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bf98: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11bf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF9Cu;
        // 0x11bfa0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFA4u;
    // 0x11bfa4: 0x0  nop
    ctx->pc = 0x11bfa4u;
    // NOP
    // 0x11bfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bfac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bfb0: 0xc046f2a  jal         func_11BCA8
    ctx->pc = 0x11BFB0u;
    SET_GPR_U32(ctx, 31, 0x11BFB8u);
    ctx->pc = 0x11BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFB0u;
    // 0x11bfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BCA8u;
    goto label_11bca8;
    ctx->pc = 0x11BFB8u;
label_11bfb8:
    // 0x11bfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFBCu;
        // 0x11bfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFC4u;
    // 0x11bfc4: 0x0  nop
    ctx->pc = 0x11bfc4u;
    // NOP
    ctx->pc = 0x11bfc8u;
}
