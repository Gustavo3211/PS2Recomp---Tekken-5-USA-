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

// Function: sub_0031DFA8
// Address: 0x31dfa8 - 0x31e048
void sub_0031DFA8_0x31dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DFA8_0x31dfa8");
#endif

    switch (ctx->pc) {
        case 0x31dfa8u: goto label_31dfa8;
        case 0x31dfacu: goto label_31dfac;
        case 0x31dfb0u: goto label_31dfb0;
        case 0x31dfb4u: goto label_31dfb4;
        case 0x31dfb8u: goto label_31dfb8;
        case 0x31dfbcu: goto label_31dfbc;
        case 0x31dfc0u: goto label_31dfc0;
        case 0x31dfc4u: goto label_31dfc4;
        case 0x31dfc8u: goto label_31dfc8;
        case 0x31dfccu: goto label_31dfcc;
        case 0x31dfd0u: goto label_31dfd0;
        case 0x31dfd4u: goto label_31dfd4;
        case 0x31dfd8u: goto label_31dfd8;
        case 0x31dfdcu: goto label_31dfdc;
        case 0x31dfe0u: goto label_31dfe0;
        case 0x31dfe4u: goto label_31dfe4;
        case 0x31dfe8u: goto label_31dfe8;
        case 0x31dfecu: goto label_31dfec;
        case 0x31dff0u: goto label_31dff0;
        case 0x31dff4u: goto label_31dff4;
        case 0x31dff8u: goto label_31dff8;
        case 0x31dffcu: goto label_31dffc;
        case 0x31e000u: goto label_31e000;
        case 0x31e004u: goto label_31e004;
        case 0x31e008u: goto label_31e008;
        case 0x31e00cu: goto label_31e00c;
        case 0x31e010u: goto label_31e010;
        case 0x31e014u: goto label_31e014;
        case 0x31e018u: goto label_31e018;
        case 0x31e01cu: goto label_31e01c;
        case 0x31e020u: goto label_31e020;
        case 0x31e024u: goto label_31e024;
        case 0x31e028u: goto label_31e028;
        case 0x31e02cu: goto label_31e02c;
        case 0x31e030u: goto label_31e030;
        case 0x31e034u: goto label_31e034;
        case 0x31e038u: goto label_31e038;
        case 0x31e03cu: goto label_31e03c;
        case 0x31e040u: goto label_31e040;
        case 0x31e044u: goto label_31e044;
        default: break;
    }

    ctx->pc = 0x31dfa8u;

label_31dfa8:
    // 0x31dfa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31dfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31dfac:
    // 0x31dfac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31dfb0:
    // 0x31dfb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31dfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31dfb4:
    // 0x31dfb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31dfb8:
    // 0x31dfb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31dfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31dfbc:
    // 0x31dfbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31dfc0:
    // 0x31dfc0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_31dfc4:
    if (ctx->pc == 0x31DFC4u) {
        ctx->pc = 0x31DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFC0u;
        // 0x31dfc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DFC8u;
        goto label_31dfc8;
    }
    ctx->pc = 0x31DFC0u;
    {
        const bool branch_taken_0x31dfc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFC0u;
        // 0x31dfc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfc0) {
            ctx->pc = 0x31E01Cu;
            goto label_31e01c;
        }
    }
    ctx->pc = 0x31DFC8u;
label_31dfc8:
    // 0x31dfc8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31dfcc:
    // 0x31dfcc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_31dfd0:
    // 0x31dfd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31dfd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31dfd4:
    // 0x31dfd4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x31dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31dfd8:
    // 0x31dfd8: 0xc0f809  jalr        $a2
label_31dfdc:
    if (ctx->pc == 0x31DFDCu) {
        ctx->pc = 0x31DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFD8u;
        // 0x31dfdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DFE0u;
        goto label_31dfe0;
    }
    ctx->pc = 0x31DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x31DFE0u);
        ctx->pc = 0x31DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFD8u;
        // 0x31dfdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DFD8u, 0x31DFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DFE0u;
label_31dfe0:
    // 0x31dfe0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x31dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31dfe4:
    // 0x31dfe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31dfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dfe8:
    // 0x31dfe8: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x31dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_31dfec:
    // 0x31dfec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31dfecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31dff0:
    // 0x31dff0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31dff4:
    // 0x31dff4: 0x40f809  jalr        $v0
label_31dff8:
    if (ctx->pc == 0x31DFF8u) {
        ctx->pc = 0x31DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFF4u;
        // 0x31dff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DFFCu;
        goto label_31dffc;
    }
    ctx->pc = 0x31DFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31DFFCu);
        ctx->pc = 0x31DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFF4u;
        // 0x31dff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DFF4u, 0x31DFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DFFCu;
label_31dffc:
    // 0x31dffc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_31e000:
    if (ctx->pc == 0x31E000u) {
        ctx->pc = 0x31E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFFCu;
        // 0x31e000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E004u;
        goto label_31e004;
    }
    ctx->pc = 0x31DFFCu;
    {
        const bool branch_taken_0x31dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFFCu;
        // 0x31e000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dffc) {
            ctx->pc = 0x31E01Cu;
            goto label_31e01c;
        }
    }
    ctx->pc = 0x31E004u;
label_31e004:
    // 0x31e004: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x31e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31e008:
    // 0x31e008: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_31e00c:
    // 0x31e00c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31e00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e010:
    // 0x31e010: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e014:
    // 0x31e014: 0x60f809  jalr        $v1
label_31e018:
    if (ctx->pc == 0x31E018u) {
        ctx->pc = 0x31E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E014u;
        // 0x31e018: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E01Cu;
        goto label_31e01c;
    }
    ctx->pc = 0x31E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31E01Cu);
        ctx->pc = 0x31E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E014u;
        // 0x31e018: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E014u, 0x31E01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E01Cu;
label_31e01c:
    // 0x31e01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e020:
    // 0x31e020: 0xc0c7766  jal         func_31DD98
label_31e024:
    if (ctx->pc == 0x31E024u) {
        ctx->pc = 0x31E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E020u;
        // 0x31e024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E028u;
        goto label_31e028;
    }
    ctx->pc = 0x31E020u;
    SET_GPR_U32(ctx, 31, 0x31E028u);
    ctx->pc = 0x31E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E020u;
    // 0x31e024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD98u, 0x31E020u, 0x31E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E028u;
label_31e028:
    // 0x31e028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e02c:
    // 0x31e02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e030:
    // 0x31e030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e034:
    // 0x31e034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e038:
    // 0x31e038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e03c:
    // 0x31e03c: 0x80c799e  j           func_31E678
label_31e040:
    if (ctx->pc == 0x31E040u) {
        ctx->pc = 0x31E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E03Cu;
        // 0x31e040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E044u;
        goto label_31e044;
    }
    ctx->pc = 0x31E03Cu;
    ctx->pc = 0x31E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E03Cu;
    // 0x31e040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E678u;
    sub_0031E678_0x31e678(rdram, ctx, runtime); return;
    ctx->pc = 0x31E044u;
label_31e044:
    // 0x31e044: 0x0  nop
    ctx->pc = 0x31e044u;
    // NOP
    ctx->pc = 0x31e048u;
}
