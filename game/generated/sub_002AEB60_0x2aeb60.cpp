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

// Function: sub_002AEB60
// Address: 0x2aeb60 - 0x2aece8
void sub_002AEB60_0x2aeb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEB60_0x2aeb60");
#endif

    switch (ctx->pc) {
        case 0x2aeb80u: goto label_2aeb80;
        case 0x2aeb90u: goto label_2aeb90;
        case 0x2aeba0u: goto label_2aeba0;
        case 0x2aebb0u: goto label_2aebb0;
        case 0x2aebc0u: goto label_2aebc0;
        case 0x2aebd0u: goto label_2aebd0;
        case 0x2aebe0u: goto label_2aebe0;
        case 0x2aec00u: goto label_2aec00;
        case 0x2aec10u: goto label_2aec10;
        case 0x2aec20u: goto label_2aec20;
        case 0x2aec30u: goto label_2aec30;
        case 0x2aec4cu: goto label_2aec4c;
        case 0x2aec6cu: goto label_2aec6c;
        case 0x2aec8cu: goto label_2aec8c;
        case 0x2aec9cu: goto label_2aec9c;
        case 0x2aecacu: goto label_2aecac;
        case 0x2aecbcu: goto label_2aecbc;
        case 0x2aecc8u: goto label_2aecc8;
        case 0x2aecd4u: goto label_2aecd4;
        default: break;
    }

    ctx->pc = 0x2aeb60u;

label_2aeb60:
    // 0x2aeb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aeb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aeb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aeb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aeb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aeb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aeb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aeb70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aeb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aeb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aeb78: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEB78u;
    SET_GPR_U32(ctx, 31, 0x2AEB80u);
    ctx->pc = 0x2AEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB78u;
    // 0x2aeb7c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEB78u, 0x2AEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB80u;
label_2aeb80:
    // 0x2aeb80: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2aeb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2aeb84: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2aeb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x2aeb88: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEB88u;
    SET_GPR_U32(ctx, 31, 0x2AEB90u);
    ctx->pc = 0x2AEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB88u;
    // 0x2aeb8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEB88u, 0x2AEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB90u;
label_2aeb90:
    // 0x2aeb90: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2aeb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2aeb94: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2aeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2aeb98: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEB98u;
    SET_GPR_U32(ctx, 31, 0x2AEBA0u);
    ctx->pc = 0x2AEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB98u;
    // 0x2aeb9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEB98u, 0x2AEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBA0u;
label_2aeba0:
    // 0x2aeba0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2aeba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2aeba4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2aeba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2aeba8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEBA8u;
    SET_GPR_U32(ctx, 31, 0x2AEBB0u);
    ctx->pc = 0x2AEBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBA8u;
    // 0x2aebac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEBA8u, 0x2AEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBB0u;
label_2aebb0:
    // 0x2aebb0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2aebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2aebb4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2aebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2aebb8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEBB8u;
    SET_GPR_U32(ctx, 31, 0x2AEBC0u);
    ctx->pc = 0x2AEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBB8u;
    // 0x2aebbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEBB8u, 0x2AEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBC0u;
label_2aebc0:
    // 0x2aebc0: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x2aebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2aebc4: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2aebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2aebc8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEBC8u;
    SET_GPR_U32(ctx, 31, 0x2AEBD0u);
    ctx->pc = 0x2AEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBC8u;
    // 0x2aebcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEBC8u, 0x2AEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBD0u;
label_2aebd0:
    // 0x2aebd0: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2aebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2aebd4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x2aebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x2aebd8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEBD8u;
    SET_GPR_U32(ctx, 31, 0x2AEBE0u);
    ctx->pc = 0x2AEBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBD8u;
    // 0x2aebdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEBD8u, 0x2AEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBE0u;
label_2aebe0:
    // 0x2aebe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebe4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2aebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2aebe8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2aebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2aebec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2aebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aebf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AEBF0u;
    {
        const bool branch_taken_0x2aebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBF0u;
        // 0x2aebf4: 0x30640008  andi        $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebf0) {
            ctx->pc = 0x2AEC38u;
            goto label_2aec38;
        }
    }
    ctx->pc = 0x2AEBF8u;
    // 0x2aebf8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEBF8u;
    SET_GPR_U32(ctx, 31, 0x2AEC00u);
    ctx->pc = 0x2AEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBF8u;
    // 0x2aebfc: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEBF8u, 0x2AEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC00u;
label_2aec00:
    // 0x2aec00: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2aec00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2aec04: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x2aec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x2aec08: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC08u;
    SET_GPR_U32(ctx, 31, 0x2AEC10u);
    ctx->pc = 0x2AEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC08u;
    // 0x2aec0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC08u, 0x2AEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC10u;
label_2aec10:
    // 0x2aec10: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2aec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2aec14: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2aec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2aec18: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC18u;
    SET_GPR_U32(ctx, 31, 0x2AEC20u);
    ctx->pc = 0x2AEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC18u;
    // 0x2aec1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC18u, 0x2AEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC20u;
label_2aec20:
    // 0x2aec20: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2aec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2aec24: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2aec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x2aec28: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC28u;
    SET_GPR_U32(ctx, 31, 0x2AEC30u);
    ctx->pc = 0x2AEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC28u;
    // 0x2aec2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC28u, 0x2AEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC30u;
label_2aec30:
    // 0x2aec30: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AEC30u;
    {
        const bool branch_taken_0x2aec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC30u;
        // 0x2aec34: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec30) {
            ctx->pc = 0x2AECD4u;
            goto label_2aecd4;
        }
    }
    ctx->pc = 0x2AEC38u;
label_2aec38:
    // 0x2aec38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEC38u;
    {
        const bool branch_taken_0x2aec38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC38u;
        // 0x2aec3c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec38) {
            ctx->pc = 0x2AEC58u;
            goto label_2aec58;
        }
    }
    ctx->pc = 0x2AEC40u;
    // 0x2aec40: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x2aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2aec44: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC44u;
    SET_GPR_U32(ctx, 31, 0x2AEC4Cu);
    ctx->pc = 0x2AEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC44u;
    // 0x2aec48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC44u, 0x2AEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC4Cu;
label_2aec4c:
    // 0x2aec4c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AEC4Cu;
    {
        const bool branch_taken_0x2aec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC4Cu;
        // 0x2aec50: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec4c) {
            ctx->pc = 0x2AECD4u;
            goto label_2aecd4;
        }
    }
    ctx->pc = 0x2AEC54u;
    // 0x2aec54: 0x0  nop
    ctx->pc = 0x2aec54u;
    // NOP
label_2aec58:
    // 0x2aec58: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEC58u;
    {
        const bool branch_taken_0x2aec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec58) {
            ctx->pc = 0x2AEC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC58u;
            // 0x2aec5c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEC78u;
            goto label_2aec78;
        }
    }
    ctx->pc = 0x2AEC60u;
    // 0x2aec60: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x2aec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2aec64: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC64u;
    SET_GPR_U32(ctx, 31, 0x2AEC6Cu);
    ctx->pc = 0x2AEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC64u;
    // 0x2aec68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC64u, 0x2AEC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC6Cu;
label_2aec6c:
    // 0x2aec6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AEC6Cu;
    {
        const bool branch_taken_0x2aec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC6Cu;
        // 0x2aec70: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec6c) {
            ctx->pc = 0x2AECD4u;
            goto label_2aecd4;
        }
    }
    ctx->pc = 0x2AEC74u;
    // 0x2aec74: 0x0  nop
    ctx->pc = 0x2aec74u;
    // NOP
label_2aec78:
    // 0x2aec78: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AEC78u;
    {
        const bool branch_taken_0x2aec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec78) {
            ctx->pc = 0x2AEC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC78u;
            // 0x2aec7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AECD8u;
            goto label_2aecd8;
        }
    }
    ctx->pc = 0x2AEC80u;
    // 0x2aec80: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x2aec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2aec84: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC84u;
    SET_GPR_U32(ctx, 31, 0x2AEC8Cu);
    ctx->pc = 0x2AEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC84u;
    // 0x2aec88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC84u, 0x2AEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC8Cu;
label_2aec8c:
    // 0x2aec8c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2aec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2aec90: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2aec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2aec94: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AEC94u;
    SET_GPR_U32(ctx, 31, 0x2AEC9Cu);
    ctx->pc = 0x2AEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC94u;
    // 0x2aec98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AEC94u, 0x2AEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC9Cu;
label_2aec9c:
    // 0x2aec9c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2aeca0: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x2aeca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x2aeca4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2AECA4u;
    SET_GPR_U32(ctx, 31, 0x2AECACu);
    ctx->pc = 0x2AECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECA4u;
    // 0x2aeca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2AECA4u, 0x2AECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECACu;
label_2aecac:
    // 0x2aecac: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2aecb0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2aecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2aecb4: 0xc0abad8  jal         func_2AEB60
    ctx->pc = 0x2AECB4u;
    SET_GPR_U32(ctx, 31, 0x2AECBCu);
    ctx->pc = 0x2AECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECB4u;
    // 0x2aecb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB60u;
    goto label_2aeb60;
    ctx->pc = 0x2AECBCu;
label_2aecbc:
    // 0x2aecbc: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2aecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2aecc0: 0xc0abad8  jal         func_2AEB60
    ctx->pc = 0x2AECC0u;
    SET_GPR_U32(ctx, 31, 0x2AECC8u);
    ctx->pc = 0x2AECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECC0u;
    // 0x2aecc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB60u;
    goto label_2aeb60;
    ctx->pc = 0x2AECC8u;
label_2aecc8:
    // 0x2aecc8: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2aecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2aeccc: 0xc0abad8  jal         func_2AEB60
    ctx->pc = 0x2AECCCu;
    SET_GPR_U32(ctx, 31, 0x2AECD4u);
    ctx->pc = 0x2AECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECCCu;
    // 0x2aecd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB60u;
    goto label_2aeb60;
    ctx->pc = 0x2AECD4u;
label_2aecd4:
    // 0x2aecd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aecd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aecd8:
    // 0x2aecd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2aecd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aecdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aecdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aece0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECE0u;
        // 0x2aece4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AECE8u;
}
