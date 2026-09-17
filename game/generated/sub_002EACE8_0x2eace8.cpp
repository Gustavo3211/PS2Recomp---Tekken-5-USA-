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

// Function: sub_002EACE8
// Address: 0x2eace8 - 0x2eae68
void sub_002EACE8_0x2eace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EACE8_0x2eace8");
#endif

    switch (ctx->pc) {
        case 0x2ead04u: goto label_2ead04;
        case 0x2ead1cu: goto label_2ead1c;
        case 0x2ead64u: goto label_2ead64;
        case 0x2ead74u: goto label_2ead74;
        case 0x2ead90u: goto label_2ead90;
        case 0x2eada0u: goto label_2eada0;
        case 0x2eadbcu: goto label_2eadbc;
        case 0x2eadccu: goto label_2eadcc;
        case 0x2eadf4u: goto label_2eadf4;
        case 0x2eae04u: goto label_2eae04;
        case 0x2eae34u: goto label_2eae34;
        case 0x2eae58u: goto label_2eae58;
        default: break;
    }

    ctx->pc = 0x2eace8u;

    // 0x2eace8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eacec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eacecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eacf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2eacf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eacf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eacf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eacfc: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2EACFCu;
    SET_GPR_U32(ctx, 31, 0x2EAD04u);
    ctx->pc = 0x2EAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACFCu;
    // 0x2ead00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2EACFCu, 0x2EAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD04u;
label_2ead04:
    // 0x2ead04: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ead08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ead0c: 0x2463f838  addiu       $v1, $v1, -0x7C8
    ctx->pc = 0x2ead0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965304));
    // 0x2ead10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ead10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead14: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2EAD14u;
    SET_GPR_U32(ctx, 31, 0x2EAD1Cu);
    ctx->pc = 0x2EAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD14u;
    // 0x2ead18: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2EAD14u, 0x2EAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD1Cu;
label_2ead1c:
    // 0x2ead1c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x2ead1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2ead20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ead20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ead24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAD24u;
    {
        const bool branch_taken_0x2ead24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD24u;
        // 0x2ead28: 0x262800b8  addiu       $t0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead24) {
            ctx->pc = 0x2EAD40u;
            goto label_2ead40;
        }
    }
    ctx->pc = 0x2EAD2Cu;
    // 0x2ead2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ead2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ead30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ead30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead34: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ead34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ead38: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAD38u;
    {
        const bool branch_taken_0x2ead38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ead38) {
            ctx->pc = 0x2EAD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD38u;
            // 0x2ead3c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAD50u;
            goto label_2ead50;
        }
    }
    ctx->pc = 0x2EAD40u;
label_2ead40:
    // 0x2ead40: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ead40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2ead44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ead44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead48: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ead48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ead4c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2ead4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2ead50:
    // 0x2ead50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ead50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ead54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead58: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2ead58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ead5c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EAD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD64u);
    ctx->pc = 0x2EAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD5Cu;
    // 0x2ead60: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EAD5Cu, 0x2EAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD64u;
label_2ead64:
    // 0x2ead64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ead64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ead68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead6c: 0xc0baac6  jal         func_2EAB18
    ctx->pc = 0x2EAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD74u);
    ctx->pc = 0x2EAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD6Cu;
    // 0x2ead70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB18u, 0x2EAD6Cu, 0x2EAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD74u;
label_2ead74:
    // 0x2ead74: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2ead78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ead78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead7c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ead7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ead80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ead80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead84: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ead84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ead88: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EAD88u;
    SET_GPR_U32(ctx, 31, 0x2EAD90u);
    ctx->pc = 0x2EAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD88u;
    // 0x2ead8c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EAD88u, 0x2EAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD90u;
label_2ead90:
    // 0x2ead90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ead90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ead94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ead98: 0xc0bab0e  jal         func_2EAC38
    ctx->pc = 0x2EAD98u;
    SET_GPR_U32(ctx, 31, 0x2EADA0u);
    ctx->pc = 0x2EAD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD98u;
    // 0x2ead9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAC38u, 0x2EAD98u, 0x2EADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADA0u;
label_2eada0:
    // 0x2eada0: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2eada4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eada8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eada8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eadac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eadacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadb0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eadb4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EADB4u;
    SET_GPR_U32(ctx, 31, 0x2EADBCu);
    ctx->pc = 0x2EADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADB4u;
    // 0x2eadb8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EADB4u, 0x2EADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADBCu;
label_2eadbc:
    // 0x2eadbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eadbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eadc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eadc4: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EADC4u;
    SET_GPR_U32(ctx, 31, 0x2EADCCu);
    ctx->pc = 0x2EADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADC4u;
    // 0x2eadc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EADC4u, 0x2EADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADCCu;
label_2eadcc:
    // 0x2eadcc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eadccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eadd0: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2eadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2eadd4: 0x244205b8  addiu       $v0, $v0, 0x5B8
    ctx->pc = 0x2eadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1464));
    // 0x2eadd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eadd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaddc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2eaddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2eade0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eade0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eade4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eade4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eade8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eadec: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EADECu;
    SET_GPR_U32(ctx, 31, 0x2EADF4u);
    ctx->pc = 0x2EADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADECu;
    // 0x2eadf0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EADECu, 0x2EADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADF4u;
label_2eadf4:
    // 0x2eadf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eadf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadf8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2eadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eadfc: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EADFCu;
    SET_GPR_U32(ctx, 31, 0x2EAE04u);
    ctx->pc = 0x2EAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADFCu;
    // 0x2eae00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EADFCu, 0x2EAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE04u;
label_2eae04:
    // 0x2eae04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eae08: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2eae0c: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2eae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2eae10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae14: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2eae14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2eae18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eae1c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eae20: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2eae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eae24: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2eae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2eae28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eae2c: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2EAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE34u);
    ctx->pc = 0x2EAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE2Cu;
    // 0x2eae30: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2EAE2Cu, 0x2EAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE34u;
label_2eae34:
    // 0x2eae34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAE34u;
    {
        const bool branch_taken_0x2eae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE34u;
        // 0x2eae38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae34) {
            ctx->pc = 0x2EAE58u;
            goto label_2eae58;
        }
    }
    ctx->pc = 0x2EAE3Cu;
    // 0x2eae3c: 0x0  nop
    ctx->pc = 0x2eae3cu;
    // NOP
    // 0x2eae40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eae44: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2eae44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2eae48: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2eae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2eae4c: 0x248405bc  addiu       $a0, $a0, 0x5BC
    ctx->pc = 0x2eae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1468));
    // 0x2eae50: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EAE50u;
    SET_GPR_U32(ctx, 31, 0x2EAE58u);
    ctx->pc = 0x2EAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE50u;
    // 0x2eae54: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EAE50u, 0x2EAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE58u;
label_2eae58:
    // 0x2eae58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eae58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eae5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eae60: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE60u;
        // 0x2eae64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAE68u;
}
