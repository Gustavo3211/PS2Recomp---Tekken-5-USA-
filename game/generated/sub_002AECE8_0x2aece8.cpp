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

// Function: sub_002AECE8
// Address: 0x2aece8 - 0x2aee18
void sub_002AECE8_0x2aece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AECE8_0x2aece8");
#endif

    switch (ctx->pc) {
        case 0x2aed44u: goto label_2aed44;
        default: break;
    }

    ctx->pc = 0x2aece8u;

    // 0x2aece8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aecec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aecf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aecf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aecf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2aecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2aecfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2aecfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2aed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2aed04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2aed04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2aed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2aed0c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2aed0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2aed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2aed14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed18: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2aed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2aed1c: 0x263000b4  addiu       $s0, $s1, 0xB4
    ctx->pc = 0x2aed1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x2aed20: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2aed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2aed24: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x2aed24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
    // 0x2aed28: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2aed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2aed2c: 0xae330064  sw          $s3, 0x64($s1)
    ctx->pc = 0x2aed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 19));
    // 0x2aed30: 0xae34008c  sw          $s4, 0x8C($s1)
    ctx->pc = 0x2aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 20));
    // 0x2aed34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AED34u;
    {
        const bool branch_taken_0x2aed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED34u;
        // 0x2aed38: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed34) {
            ctx->pc = 0x2AED8Cu;
            goto label_2aed8c;
        }
    }
    ctx->pc = 0x2AED3Cu;
    // 0x2aed3c: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2AED3Cu;
    SET_GPR_U32(ctx, 31, 0x2AED44u);
    ctx->pc = 0x2A7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7940u, 0x2AED3Cu, 0x2AED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED44u;
label_2aed44:
    // 0x2aed44: 0xc7809094  lwc1        $f0, -0x6F6C($gp)
    ctx->pc = 0x2aed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aed48: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2aed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2aed4c: 0x240405dc  addiu       $a0, $zero, 0x5DC
    ctx->pc = 0x2aed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2aed50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aed50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2aed54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aed54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aed58: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2aed5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aed60: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed64: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2aed64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2aed68: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2aed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed6c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2aed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2aed70: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2aed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed74: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x2aed74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x2aed78: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed7c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2aed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2aed80: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2aed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2aed84: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2aed84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2aed88: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2aed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2aed8c:
    // 0x2aed8c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2aed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2aed90: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AED90u;
    {
        const bool branch_taken_0x2aed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED90u;
        // 0x2aed94: 0x262400b4  addiu       $a0, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed90) {
            ctx->pc = 0x2AEDF8u;
            goto label_2aedf8;
        }
    }
    ctx->pc = 0x2AED98u;
    // 0x2aed98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aed9c: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2aed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x2aeda0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aeda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aeda4: 0xac730064  sw          $s3, 0x64($v1)
    ctx->pc = 0x2aeda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 19));
    // 0x2aeda8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aedac: 0xac54008c  sw          $s4, 0x8C($v0)
    ctx->pc = 0x2aedacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 20));
    // 0x2aedb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aedb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aedb4: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x2aedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x2aedb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aedbc: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2aedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x2aedc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aedc4: 0xac730064  sw          $s3, 0x64($v1)
    ctx->pc = 0x2aedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 19));
    // 0x2aedc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aedcc: 0xac54008c  sw          $s4, 0x8C($v0)
    ctx->pc = 0x2aedccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 20));
    // 0x2aedd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2aedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aedd4: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x2aedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x2aedd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2aedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aeddc: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2aeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x2aede0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2aede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aede4: 0xac730064  sw          $s3, 0x64($v1)
    ctx->pc = 0x2aede4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 19));
    // 0x2aede8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2aede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aedec: 0xac54008c  sw          $s4, 0x8C($v0)
    ctx->pc = 0x2aedecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 20));
    // 0x2aedf0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aedf4: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x2aedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
label_2aedf8:
    // 0x2aedf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aedf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aedfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2aedfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aee00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2aee00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2aee04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aee08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2aee08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2aee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2aee10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE10u;
        // 0x2aee14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE18u;
}
