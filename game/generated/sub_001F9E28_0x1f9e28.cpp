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

// Function: sub_001F9E28
// Address: 0x1f9e28 - 0x1fa8e0
void sub_001F9E28_0x1f9e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9E28_0x1f9e28");
#endif

    switch (ctx->pc) {
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e8cu: goto label_1f9e8c;
        case 0x1f9ee4u: goto label_1f9ee4;
        case 0x1f9f34u: goto label_1f9f34;
        case 0x1f9f64u: goto label_1f9f64;
        case 0x1f9fb4u: goto label_1f9fb4;
        case 0x1f9ff4u: goto label_1f9ff4;
        case 0x1fa04cu: goto label_1fa04c;
        case 0x1fa060u: goto label_1fa060;
        case 0x1fa074u: goto label_1fa074;
        case 0x1fa07cu: goto label_1fa07c;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa09cu: goto label_1fa09c;
        case 0x1fa0a4u: goto label_1fa0a4;
        case 0x1fa0b0u: goto label_1fa0b0;
        case 0x1fa0c8u: goto label_1fa0c8;
        case 0x1fa0d8u: goto label_1fa0d8;
        case 0x1fa0e4u: goto label_1fa0e4;
        case 0x1fa0f0u: goto label_1fa0f0;
        case 0x1fa0f8u: goto label_1fa0f8;
        case 0x1fa104u: goto label_1fa104;
        case 0x1fa10cu: goto label_1fa10c;
        case 0x1fa118u: goto label_1fa118;
        case 0x1fa120u: goto label_1fa120;
        case 0x1fa128u: goto label_1fa128;
        case 0x1fa130u: goto label_1fa130;
        case 0x1fa140u: goto label_1fa140;
        case 0x1fa164u: goto label_1fa164;
        case 0x1fa1d4u: goto label_1fa1d4;
        case 0x1fa1e4u: goto label_1fa1e4;
        case 0x1fa20cu: goto label_1fa20c;
        case 0x1fa230u: goto label_1fa230;
        case 0x1fa23cu: goto label_1fa23c;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa260u: goto label_1fa260;
        case 0x1fa294u: goto label_1fa294;
        case 0x1fa2b0u: goto label_1fa2b0;
        case 0x1fa2b8u: goto label_1fa2b8;
        case 0x1fa2d0u: goto label_1fa2d0;
        case 0x1fa2d8u: goto label_1fa2d8;
        case 0x1fa2e8u: goto label_1fa2e8;
        case 0x1fa338u: goto label_1fa338;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa3ccu: goto label_1fa3cc;
        case 0x1fa4ccu: goto label_1fa4cc;
        case 0x1fa520u: goto label_1fa520;
        case 0x1fa538u: goto label_1fa538;
        case 0x1fa594u: goto label_1fa594;
        case 0x1fa5b0u: goto label_1fa5b0;
        case 0x1fa5bcu: goto label_1fa5bc;
        case 0x1fa5d0u: goto label_1fa5d0;
        case 0x1fa5f0u: goto label_1fa5f0;
        case 0x1fa610u: goto label_1fa610;
        case 0x1fa620u: goto label_1fa620;
        case 0x1fa640u: goto label_1fa640;
        case 0x1fa65cu: goto label_1fa65c;
        case 0x1fa680u: goto label_1fa680;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa700u: goto label_1fa700;
        case 0x1fa734u: goto label_1fa734;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8b0u: goto label_1fa8b0;
        default: break;
    }

    ctx->pc = 0x1f9e28u;

    // 0x1f9e28: 0x27bdf890  addiu       $sp, $sp, -0x770
    ctx->pc = 0x1f9e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965392));
    // 0x1f9e2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9e30: 0xffb00720  sd          $s0, 0x720($sp)
    ctx->pc = 0x1f9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1824), GPR_U64(ctx, 16));
    // 0x1f9e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e38: 0x24443370  addiu       $a0, $v0, 0x3370
    ctx->pc = 0x1f9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x1f9e3c: 0xffb10728  sd          $s1, 0x728($sp)
    ctx->pc = 0x1f9e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1832), GPR_U64(ctx, 17));
    // 0x1f9e40: 0xffb20730  sd          $s2, 0x730($sp)
    ctx->pc = 0x1f9e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1840), GPR_U64(ctx, 18));
    // 0x1f9e44: 0xffb40740  sd          $s4, 0x740($sp)
    ctx->pc = 0x1f9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1856), GPR_U64(ctx, 20));
    // 0x1f9e48: 0xffb70758  sd          $s7, 0x758($sp)
    ctx->pc = 0x1f9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1880), GPR_U64(ctx, 23));
    // 0x1f9e4c: 0xffb30738  sd          $s3, 0x738($sp)
    ctx->pc = 0x1f9e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1848), GPR_U64(ctx, 19));
    // 0x1f9e50: 0xffb50748  sd          $s5, 0x748($sp)
    ctx->pc = 0x1f9e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1864), GPR_U64(ctx, 21));
    // 0x1f9e54: 0xffb60750  sd          $s6, 0x750($sp)
    ctx->pc = 0x1f9e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1872), GPR_U64(ctx, 22));
    // 0x1f9e58: 0xffbe0760  sd          $fp, 0x760($sp)
    ctx->pc = 0x1f9e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1888), GPR_U64(ctx, 30));
    // 0x1f9e5c: 0xffbf0768  sd          $ra, 0x768($sp)
    ctx->pc = 0x1f9e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1896), GPR_U64(ctx, 31));
    // 0x1f9e60: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x1F9E60u;
    SET_GPR_U32(ctx, 31, 0x1F9E68u);
    ctx->pc = 0x1F9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E60u;
    // 0x1f9e64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x1F9E60u, 0x1F9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E68u;
label_1f9e68:
    // 0x1f9e68: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x1f9e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f9e6c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f9e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f9e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f9e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9e78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f9e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f9e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e80: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x1f9e80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f9e84: 0xc07e730  jal         func_1F9CC0
    ctx->pc = 0x1F9E84u;
    SET_GPR_U32(ctx, 31, 0x1F9E8Cu);
    ctx->pc = 0x1F9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E84u;
    // 0x1f9e88: 0xafa20710  sw          $v0, 0x710($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9CC0u, 0x1F9E84u, 0x1F9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E8Cu;
label_1f9e8c:
    // 0x1f9e8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f9e90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f9e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e94: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x1f9e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1f9e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9e9c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1f9e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ea0: 0xafa30714  sw          $v1, 0x714($sp)
    ctx->pc = 0x1f9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1812), GPR_U32(ctx, 3));
    // 0x1f9ea4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9EA4u;
    {
        const bool branch_taken_0x1f9ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EA4u;
        // 0x1f9ea8: 0xafa40718  sw          $a0, 0x718($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ea4) {
            ctx->pc = 0x1F9EC8u;
            goto label_1f9ec8;
        }
    }
    ctx->pc = 0x1F9EACu;
    // 0x1f9eac: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x1f9eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1f9eb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9EB0u;
    {
        const bool branch_taken_0x1f9eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB0u;
        // 0x1f9eb4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb0) {
            ctx->pc = 0x1F9ECCu;
            goto label_1f9ecc;
        }
    }
    ctx->pc = 0x1F9EB8u;
    // 0x1f9eb8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ec0: 0xafa80714  sw          $t0, 0x714($sp)
    ctx->pc = 0x1f9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1812), GPR_U32(ctx, 8));
    // 0x1f9ec4: 0xafa20718  sw          $v0, 0x718($sp)
    ctx->pc = 0x1f9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1816), GPR_U32(ctx, 2));
label_1f9ec8:
    // 0x1f9ec8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1f9ecc:
    // 0x1f9ecc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x1f9ed0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f9ed4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9ED4u;
    {
        const bool branch_taken_0x1f9ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ed4) {
            ctx->pc = 0x1F9ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9ED4u;
            // 0x1f9ed8: 0x8fa40714  lw          $a0, 0x714($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F10u;
            goto label_1f9f10;
        }
    }
    ctx->pc = 0x1F9EDCu;
    // 0x1f9edc: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x1F9EDCu;
    SET_GPR_U32(ctx, 31, 0x1F9EE4u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x1F9EDCu, 0x1F9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9EE4u;
label_1f9ee4:
    // 0x1f9ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9ee8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9EE8u;
    {
        const bool branch_taken_0x1f9ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE8u;
        // 0x1f9eec: 0x8fa40714  lw          $a0, 0x714($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee8) {
            ctx->pc = 0x1F9F10u;
            goto label_1f9f10;
        }
    }
    ctx->pc = 0x1F9EF0u;
    // 0x1f9ef0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9ef4: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f9ef8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f9efc: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f9efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f9f00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9F00u;
    {
        const bool branch_taken_0x1f9f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f00) {
            ctx->pc = 0x1F9F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9F00u;
            // 0x1f9f04: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F08u;
            goto label_1f9f08;
        }
    }
    ctx->pc = 0x1F9F08u;
label_1f9f08:
    // 0x1f9f08: 0x9477003c  lhu         $s7, 0x3C($v1)
    ctx->pc = 0x1f9f08u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f9f0c: 0x8fa40714  lw          $a0, 0x714($sp)
    ctx->pc = 0x1f9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
label_1f9f10:
    // 0x1f9f10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f9f14: 0x27a80300  addiu       $t0, $sp, 0x300
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f9f18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9f1c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f20: 0x529818  mult        $s3, $v0, $s2
    ctx->pc = 0x1f9f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1f9f24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9f28: 0x2450b400  addiu       $s0, $v0, -0x4C00
    ctx->pc = 0x1f9f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x1f9f2c: 0xc0a3b04  jal         func_28EC10
    ctx->pc = 0x1F9F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9F34u);
    ctx->pc = 0x1F9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F2Cu;
    // 0x1f9f30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC10u, 0x1F9F2Cu, 0x1F9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F34u;
label_1f9f34:
    // 0x1f9f34: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f9f38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9F38u;
    {
        const bool branch_taken_0x1f9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F38u;
        // 0x1f9f3c: 0x171880  sll         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f38) {
            ctx->pc = 0x1F9F70u;
            goto label_1f9f70;
        }
    }
    ctx->pc = 0x1F9F40u;
    // 0x1f9f40: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x1f9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x1f9f44: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x1f9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x1f9f48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1f9f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1f9f4c: 0x10400258  beqz        $v0, . + 4 + (0x258 << 2)
    ctx->pc = 0x1F9F4Cu;
    {
        const bool branch_taken_0x1f9f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F4Cu;
        // 0x1f9f50: 0x8fa30710  lw          $v1, 0x710($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f4c) {
            ctx->pc = 0x1FA8B0u;
            goto label_1fa8b0;
        }
    }
    ctx->pc = 0x1F9F54u;
    // 0x1f9f54: 0x50600257  beql        $v1, $zero, . + 4 + (0x257 << 2)
    ctx->pc = 0x1F9F54u;
    {
        const bool branch_taken_0x1f9f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f54) {
            ctx->pc = 0x1F9F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9F54u;
            // 0x1f9f58: 0xdfb00720  ld          $s0, 0x720($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA8B4u;
            goto label_1fa8b4;
        }
    }
    ctx->pc = 0x1F9F5Cu;
    // 0x1f9f5c: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9F64u);
    ctx->pc = 0x1F9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F5Cu;
    // 0x1f9f60: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9F5Cu, 0x1F9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F64u;
label_1f9f64:
    // 0x1f9f64: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x1F9F64u;
    {
        const bool branch_taken_0x1f9f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F64u;
        // 0x1f9f68: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f64) {
            ctx->pc = 0x1FA8B0u;
            goto label_1fa8b0;
        }
    }
    ctx->pc = 0x1F9F6Cu;
    // 0x1f9f6c: 0x0  nop
    ctx->pc = 0x1f9f6cu;
    // NOP
label_1f9f70:
    // 0x1f9f70: 0x12f040  sll         $fp, $s2, 1
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9f74: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f9f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f9f78: 0x3d01821  addu        $v1, $fp, $s0
    ctx->pc = 0x1f9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x1f9f7c: 0x8c8283c0  lw          $v0, -0x7C40($a0)
    ctx->pc = 0x1f9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f9f80: 0x84640034  lh          $a0, 0x34($v1)
    ctx->pc = 0x1f9f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1f9f84: 0x17a880  sll         $s5, $s7, 2
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1f9f88: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f9f8c: 0x94001a  div         $zero, $a0, $s4
    ctx->pc = 0x1f9f8cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9f90: 0x8810  mfhi        $s1
    ctx->pc = 0x1f9f90u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1f9f94: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1F9F94u;
    {
        const bool branch_taken_0x1f9f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F94u;
        // 0x1f9f98: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f94) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1F9F9Cu;
    // 0x1f9f9c: 0x1a8000cc  blez        $s4, . + 4 + (0xCC << 2)
    ctx->pc = 0x1F9F9Cu;
    {
        const bool branch_taken_0x1f9f9c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1F9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F9Cu;
        // 0x1f9fa0: 0x8fa20710  lw          $v0, 0x710($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f9c) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1F9FA4u;
    // 0x1f9fa4: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x1F9FA4u;
    {
        const bool branch_taken_0x1f9fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fa4) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1F9FACu;
    // 0x1f9fac: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x1F9FACu;
    SET_GPR_U32(ctx, 31, 0x1F9FB4u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x1F9FACu, 0x1F9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FB4u;
label_1f9fb4:
    // 0x1f9fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9fbc: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F9FBCu;
    {
        const bool branch_taken_0x1f9fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9fbc) {
            ctx->pc = 0x1FA138u;
            goto label_1fa138;
        }
    }
    ctx->pc = 0x1F9FC4u;
    // 0x1f9fc4: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1f9fc8: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x1f9fcc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1f9fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1f9fd0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F9FD0u;
    {
        const bool branch_taken_0x1f9fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FD0u;
        // 0x1f9fd4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fd0) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1F9FD8u;
    // 0x1f9fd8: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1f9fdc: 0x8c42a848  lw          $v0, -0x57B8($v0)
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944840)));
    // 0x1f9fe0: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x1f9fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x1f9fe4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F9FE4u;
    {
        const bool branch_taken_0x1f9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FE4u;
        // 0x1f9fe8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fe4) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1F9FECu;
    // 0x1f9fec: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1F9FECu;
    SET_GPR_U32(ctx, 31, 0x1F9FF4u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x1F9FECu, 0x1F9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FF4u;
label_1f9ff4:
    // 0x1f9ff4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FF4u;
        // 0x1f9ff8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1F9FFCu;
    // 0x1f9ffc: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1fa000: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1fa004: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa008: 0x94630026  lhu         $v1, 0x26($v1)
    ctx->pc = 0x1fa008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1fa00c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA00Cu;
    {
        const bool branch_taken_0x1fa00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA00Cu;
        // 0x1fa010: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa00c) {
            ctx->pc = 0x1FA02Cu;
            goto label_1fa02c;
        }
    }
    ctx->pc = 0x1FA014u;
    // 0x1fa014: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA014u;
    {
        const bool branch_taken_0x1fa014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA014u;
        // 0x1fa018: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa014) {
            ctx->pc = 0x1FA02Cu;
            goto label_1fa02c;
        }
    }
    ctx->pc = 0x1FA01Cu;
    // 0x1fa01c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA01Cu;
    {
        const bool branch_taken_0x1fa01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA01Cu;
        // 0x1fa020: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa01c) {
            ctx->pc = 0x1FA02Cu;
            goto label_1fa02c;
        }
    }
    ctx->pc = 0x1FA024u;
    // 0x1fa024: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FA024u;
    {
        const bool branch_taken_0x1fa024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA024u;
        // 0x1fa028: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa024) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1FA02Cu;
label_1fa02c:
    // 0x1fa02c: 0x3a48021  addu        $s0, $sp, $a0
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1fa030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fa030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa038: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1fa03c: 0x5082001d  beql        $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA03Cu;
    {
        const bool branch_taken_0x1fa03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fa03c) {
            ctx->pc = 0x1FA040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA03Cu;
            // 0x1fa040: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1FA044u;
    // 0x1fa044: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA044u;
    SET_GPR_U32(ctx, 31, 0x1FA04Cu);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA044u, 0x1FA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA04Cu;
label_1fa04c:
    // 0x1fa04c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa050: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA050u;
    {
        const bool branch_taken_0x1fa050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fa050) {
            ctx->pc = 0x1FA06Cu;
            goto label_1fa06c;
        }
    }
    ctx->pc = 0x1FA058u;
    // 0x1fa058: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA058u;
    SET_GPR_U32(ctx, 31, 0x1FA060u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA058u, 0x1FA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1FA068u;
    // 0x1fa068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa06c:
    // 0x1fa06c: 0xc07f0fe  jal         func_1FC3F8
    ctx->pc = 0x1FA06Cu;
    SET_GPR_U32(ctx, 31, 0x1FA074u);
    ctx->pc = 0x1FC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3F8u, 0x1FA06Cu, 0x1FA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA074u;
label_1fa074:
    // 0x1fa074: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FA074u;
    SET_GPR_U32(ctx, 31, 0x1FA07Cu);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FA074u, 0x1FA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA07Cu;
label_1fa07c:
    // 0x1fa07c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA07Cu;
    {
        const bool branch_taken_0x1fa07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa07c) {
            ctx->pc = 0x1FA094u;
            goto label_1fa094;
        }
    }
    ctx->pc = 0x1FA084u;
    // 0x1fa084: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA084u;
    SET_GPR_U32(ctx, 31, 0x1FA08Cu);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA084u, 0x1FA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA08Cu;
label_1fa08c:
    // 0x1fa08c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA08Cu;
    {
        const bool branch_taken_0x1fa08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA08Cu;
        // 0x1fa090: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa08c) {
            ctx->pc = 0x1FA0B4u;
            goto label_1fa0b4;
        }
    }
    ctx->pc = 0x1FA094u;
label_1fa094:
    // 0x1fa094: 0xc08f236  jal         func_23C8D8
    ctx->pc = 0x1FA094u;
    SET_GPR_U32(ctx, 31, 0x1FA09Cu);
    ctx->pc = 0x23C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C8D8u, 0x1FA094u, 0x1FA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA09Cu;
label_1fa09c:
    // 0x1fa09c: 0xc07f106  jal         func_1FC418
    ctx->pc = 0x1FA09Cu;
    SET_GPR_U32(ctx, 31, 0x1FA0A4u);
    ctx->pc = 0x1FA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA09Cu;
    // 0x1fa0a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC418u, 0x1FA09Cu, 0x1FA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0A4u;
label_1fa0a4:
    // 0x1fa0a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0a8: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FA0A8u;
    SET_GPR_U32(ctx, 31, 0x1FA0B0u);
    ctx->pc = 0x1FA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0A8u;
    // 0x1fa0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FA0A8u, 0x1FA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0B0u;
label_1fa0b0:
    // 0x1fa0b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1fa0b4:
    // 0x1fa0b4: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x1fa0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936748)));
    // 0x1fa0b8: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x1FA0B8u;
    {
        const bool branch_taken_0x1fa0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0b8) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA0C0u;
    // 0x1fa0c0: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FA0C0u;
    SET_GPR_U32(ctx, 31, 0x1FA0C8u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FA0C0u, 0x1FA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0C8u;
label_1fa0c8:
    // 0x1fa0c8: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1FA0C8u;
    {
        const bool branch_taken_0x1fa0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0c8) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA0D0u;
    // 0x1fa0d0: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x1FA0D0u;
    SET_GPR_U32(ctx, 31, 0x1FA0D8u);
    ctx->pc = 0x1FA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0D0u;
    // 0x1fa0d4: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x1FA0D0u, 0x1FA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0D8u;
label_1fa0d8:
    // 0x1fa0d8: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1fa0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1fa0dc: 0xc07e636  jal         func_1F98D8
    ctx->pc = 0x1FA0DCu;
    SET_GPR_U32(ctx, 31, 0x1FA0E4u);
    ctx->pc = 0x1FA0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0DCu;
    // 0x1fa0e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D8u, 0x1FA0DCu, 0x1FA0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0E4u;
label_1fa0e4:
    // 0x1fa0e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa0e8: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x1FA0E8u;
    SET_GPR_U32(ctx, 31, 0x1FA0F0u);
    ctx->pc = 0x1FA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0E8u;
    // 0x1fa0ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x1FA0E8u, 0x1FA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0F0u;
label_1fa0f0:
    // 0x1fa0f0: 0xc07e636  jal         func_1F98D8
    ctx->pc = 0x1FA0F0u;
    SET_GPR_U32(ctx, 31, 0x1FA0F8u);
    ctx->pc = 0x1FA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0F0u;
    // 0x1fa0f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D8u, 0x1FA0F0u, 0x1FA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0F8u;
label_1fa0f8:
    // 0x1fa0f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fa0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fa0fc: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x1FA0FCu;
    SET_GPR_U32(ctx, 31, 0x1FA104u);
    ctx->pc = 0x1FA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0FCu;
    // 0x1fa100: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x1FA0FCu, 0x1FA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA104u;
label_1fa104:
    // 0x1fa104: 0xc07f106  jal         func_1FC418
    ctx->pc = 0x1FA104u;
    SET_GPR_U32(ctx, 31, 0x1FA10Cu);
    ctx->pc = 0x1FA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA104u;
    // 0x1fa108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC418u, 0x1FA104u, 0x1FA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA10Cu;
label_1fa10c:
    // 0x1fa10c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa110: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FA110u;
    SET_GPR_U32(ctx, 31, 0x1FA118u);
    ctx->pc = 0x1FA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA110u;
    // 0x1fa114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FA110u, 0x1FA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA118u;
label_1fa118:
    // 0x1fa118: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x1FA118u;
    SET_GPR_U32(ctx, 31, 0x1FA120u);
    ctx->pc = 0x1FA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA118u;
    // 0x1fa11c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x1FA118u, 0x1FA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA120u;
label_1fa120:
    // 0x1fa120: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x1FA120u;
    SET_GPR_U32(ctx, 31, 0x1FA128u);
    ctx->pc = 0x1FA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA120u;
    // 0x1fa124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x1FA120u, 0x1FA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA128u;
label_1fa128:
    // 0x1fa128: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FA128u;
    SET_GPR_U32(ctx, 31, 0x1FA130u);
    ctx->pc = 0x1FA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA128u;
    // 0x1fa12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FA128u, 0x1FA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA130u;
label_1fa130:
    // 0x1fa130: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1FA130u;
    {
        const bool branch_taken_0x1fa130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa130) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA138u;
label_1fa138:
    // 0x1fa138: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x1FA138u;
    SET_GPR_U32(ctx, 31, 0x1FA140u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x1FA138u, 0x1FA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA140u;
label_1fa140:
    // 0x1fa140: 0x14500063  bne         $v0, $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1FA140u;
    {
        const bool branch_taken_0x1fa140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1FA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA140u;
        // 0x1fa144: 0x17a880  sll         $s5, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa140) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA148u;
    // 0x1fa148: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1fa148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1fa14c: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x1fa150: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1fa150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1fa154: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1FA154u;
    {
        const bool branch_taken_0x1fa154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA154u;
        // 0x1fa158: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa154) {
            ctx->pc = 0x1FA23Cu;
            goto label_1fa23c;
        }
    }
    ctx->pc = 0x1FA15Cu;
    // 0x1fa15c: 0xc07f0c4  jal         func_1FC310
    ctx->pc = 0x1FA15Cu;
    SET_GPR_U32(ctx, 31, 0x1FA164u);
    ctx->pc = 0x1FA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA15Cu;
    // 0x1fa160: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC310u, 0x1FA15Cu, 0x1FA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA164u;
label_1fa164:
    // 0x1fa164: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA164u;
    {
        const bool branch_taken_0x1fa164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA164u;
        // 0x1fa168: 0x169080  sll         $s2, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa164) {
            ctx->pc = 0x1FA1F0u;
            goto label_1fa1f0;
        }
    }
    ctx->pc = 0x1FA16Cu;
    // 0x1fa16c: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1fa170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fa170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa174: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x1fa174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1fa178: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA178u;
    {
        const bool branch_taken_0x1fa178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa178) {
            ctx->pc = 0x1FA1F0u;
            goto label_1fa1f0;
        }
    }
    ctx->pc = 0x1FA180u;
    // 0x1fa180: 0x94830026  lhu         $v1, 0x26($a0)
    ctx->pc = 0x1fa180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x1fa184: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA184u;
    {
        const bool branch_taken_0x1fa184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA184u;
        // 0x1fa188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa184) {
            ctx->pc = 0x1FA1B8u;
            goto label_1fa1b8;
        }
    }
    ctx->pc = 0x1FA18Cu;
    // 0x1fa18c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA18Cu;
    {
        const bool branch_taken_0x1fa18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA18Cu;
        // 0x1fa190: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa18c) {
            ctx->pc = 0x1FA1B8u;
            goto label_1fa1b8;
        }
    }
    ctx->pc = 0x1FA194u;
    // 0x1fa194: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA194u;
    {
        const bool branch_taken_0x1fa194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA194u;
        // 0x1fa198: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa194) {
            ctx->pc = 0x1FA1B8u;
            goto label_1fa1b8;
        }
    }
    ctx->pc = 0x1FA19Cu;
    // 0x1fa19c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA19Cu;
    {
        const bool branch_taken_0x1fa19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA19Cu;
        // 0x1fa1a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa19c) {
            ctx->pc = 0x1FA1B8u;
            goto label_1fa1b8;
        }
    }
    ctx->pc = 0x1FA1A4u;
    // 0x1fa1a4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA1A4u;
    {
        const bool branch_taken_0x1fa1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1A4u;
        // 0x1fa1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1a4) {
            ctx->pc = 0x1FA1F0u;
            goto label_1fa1f0;
        }
    }
    ctx->pc = 0x1FA1ACu;
    // 0x1fa1ac: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x1fa1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1fa1b0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA1B0u;
    {
        const bool branch_taken_0x1fa1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fa1b0) {
            ctx->pc = 0x1FA1F0u;
            goto label_1fa1f0;
        }
    }
    ctx->pc = 0x1FA1B8u;
label_1fa1b8:
    // 0x1fa1b8: 0x21c1021  addu        $v0, $s0, $gp
    ctx->pc = 0x1fa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x1fa1bc: 0x8c42a848  lw          $v0, -0x57B8($v0)
    ctx->pc = 0x1fa1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944840)));
    // 0x1fa1c0: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x1fa1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x1fa1c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA1C4u;
    {
        const bool branch_taken_0x1fa1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa1c4) {
            ctx->pc = 0x1FA1F0u;
            goto label_1fa1f0;
        }
    }
    ctx->pc = 0x1FA1CCu;
    // 0x1fa1cc: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA1CCu;
    SET_GPR_U32(ctx, 31, 0x1FA1D4u);
    ctx->pc = 0x1FA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA1CCu;
    // 0x1fa1d0: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA1CCu, 0x1FA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1D4u;
label_1fa1d4:
    // 0x1fa1d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1d8: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1fa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1fa1dc: 0xc07f0bc  jal         func_1FC2F0
    ctx->pc = 0x1FA1DCu;
    SET_GPR_U32(ctx, 31, 0x1FA1E4u);
    ctx->pc = 0x1FA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA1DCu;
    // 0x1fa1e0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC2F0u, 0x1FA1DCu, 0x1FA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1E4u;
label_1fa1e4:
    // 0x1fa1e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA1E4u;
    {
        const bool branch_taken_0x1fa1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa1e4) {
            ctx->pc = 0x1FA23Cu;
            goto label_1fa23c;
        }
    }
    ctx->pc = 0x1FA1ECu;
    // 0x1fa1ec: 0x0  nop
    ctx->pc = 0x1fa1ecu;
    // NOP
label_1fa1f0:
    // 0x1fa1f0: 0x21c1021  addu        $v0, $s0, $gp
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x1fa1f4: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x1fa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x1fa1f8: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1fa1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1fa1fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA1FCu;
    {
        const bool branch_taken_0x1fa1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa1fc) {
            ctx->pc = 0x1FA23Cu;
            goto label_1fa23c;
        }
    }
    ctx->pc = 0x1FA204u;
    // 0x1fa204: 0xc07f0c4  jal         func_1FC310
    ctx->pc = 0x1FA204u;
    SET_GPR_U32(ctx, 31, 0x1FA20Cu);
    ctx->pc = 0x1FA208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA204u;
    // 0x1fa208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC310u, 0x1FA204u, 0x1FA20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA20Cu;
label_1fa20c:
    // 0x1fa20c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA20Cu;
    {
        const bool branch_taken_0x1fa20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa20c) {
            ctx->pc = 0x1FA23Cu;
            goto label_1fa23c;
        }
    }
    ctx->pc = 0x1FA214u;
    // 0x1fa214: 0x21c1021  addu        $v0, $s0, $gp
    ctx->pc = 0x1fa214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x1fa218: 0x8c42a848  lw          $v0, -0x57B8($v0)
    ctx->pc = 0x1fa218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944840)));
    // 0x1fa21c: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x1fa21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x1fa220: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA220u;
    {
        const bool branch_taken_0x1fa220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa220) {
            ctx->pc = 0x1FA23Cu;
            goto label_1fa23c;
        }
    }
    ctx->pc = 0x1FA228u;
    // 0x1fa228: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA228u;
    SET_GPR_U32(ctx, 31, 0x1FA230u);
    ctx->pc = 0x1FA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA228u;
    // 0x1fa22c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA228u, 0x1FA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA230u;
label_1fa230:
    // 0x1fa230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa234: 0xc07f0bc  jal         func_1FC2F0
    ctx->pc = 0x1FA234u;
    SET_GPR_U32(ctx, 31, 0x1FA23Cu);
    ctx->pc = 0x1FA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA234u;
    // 0x1fa238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC2F0u, 0x1FA234u, 0x1FA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA23Cu;
label_1fa23c:
    // 0x1fa23c: 0xc07f0c4  jal         func_1FC310
    ctx->pc = 0x1FA23Cu;
    SET_GPR_U32(ctx, 31, 0x1FA244u);
    ctx->pc = 0x1FA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA23Cu;
    // 0x1fa240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC310u, 0x1FA23Cu, 0x1FA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA244u;
label_1fa244:
    // 0x1fa244: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA244u;
    {
        const bool branch_taken_0x1fa244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA244u;
        // 0x1fa248: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa244) {
            ctx->pc = 0x1FA268u;
            goto label_1fa268;
        }
    }
    ctx->pc = 0x1FA24Cu;
    // 0x1fa24c: 0x3c06000b  lui         $a2, 0xB
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
    // 0x1fa250: 0x26041fd0  addiu       $a0, $s0, 0x1FD0
    ctx->pc = 0x1fa250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8144));
    // 0x1fa254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa258: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA258u;
    SET_GPR_U32(ctx, 31, 0x1FA260u);
    ctx->pc = 0x1FA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA258u;
    // 0x1fa25c: 0x34c60099  ori         $a2, $a2, 0x99 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)153);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA258u, 0x1FA260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA260u;
label_1fa260:
    // 0x1fa260: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA260u;
    {
        const bool branch_taken_0x1fa260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa260) {
            ctx->pc = 0x1FA2B0u;
            goto label_1fa2b0;
        }
    }
    ctx->pc = 0x1FA268u;
label_1fa268:
    // 0x1fa268: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1fa268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1fa26c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fa26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa274: 0x94820028  lhu         $v0, 0x28($a0)
    ctx->pc = 0x1fa274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1fa278: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA278u;
    {
        const bool branch_taken_0x1fa278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA278u;
        // 0x1fa27c: 0x3c06000b  lui         $a2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa278) {
            ctx->pc = 0x1FA2A0u;
            goto label_1fa2a0;
        }
    }
    ctx->pc = 0x1FA280u;
    // 0x1fa280: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x1fa280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x1fa284: 0x26041fd0  addiu       $a0, $s0, 0x1FD0
    ctx->pc = 0x1fa284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8144));
    // 0x1fa288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa28c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA28Cu;
    SET_GPR_U32(ctx, 31, 0x1FA294u);
    ctx->pc = 0x1FA290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA28Cu;
    // 0x1fa290: 0x34c60097  ori         $a2, $a2, 0x97 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA28Cu, 0x1FA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA294u;
label_1fa294:
    // 0x1fa294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA294u;
    {
        const bool branch_taken_0x1fa294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa294) {
            ctx->pc = 0x1FA2B0u;
            goto label_1fa2b0;
        }
    }
    ctx->pc = 0x1FA29Cu;
    // 0x1fa29c: 0x0  nop
    ctx->pc = 0x1fa29cu;
    // NOP
label_1fa2a0:
    // 0x1fa2a0: 0x26041fd0  addiu       $a0, $s0, 0x1FD0
    ctx->pc = 0x1fa2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8144));
    // 0x1fa2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2a8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA2A8u;
    SET_GPR_U32(ctx, 31, 0x1FA2B0u);
    ctx->pc = 0x1FA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2A8u;
    // 0x1fa2ac: 0x34c60098  ori         $a2, $a2, 0x98 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA2A8u, 0x1FA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2B0u;
label_1fa2b0:
    // 0x1fa2b0: 0xc07f0ea  jal         func_1FC3A8
    ctx->pc = 0x1FA2B0u;
    SET_GPR_U32(ctx, 31, 0x1FA2B8u);
    ctx->pc = 0x1FC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A8u, 0x1FA2B0u, 0x1FA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2B8u;
label_1fa2b8:
    // 0x1fa2b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA2B8u;
    {
        const bool branch_taken_0x1fa2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2B8u;
        // 0x1fa2bc: 0x3c06000b  lui         $a2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2b8) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA2C0u;
    // 0x1fa2c0: 0x26041fd0  addiu       $a0, $s0, 0x1FD0
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8144));
    // 0x1fa2c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA2C8u;
    SET_GPR_U32(ctx, 31, 0x1FA2D0u);
    ctx->pc = 0x1FA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2C8u;
    // 0x1fa2cc: 0x34c6009a  ori         $a2, $a2, 0x9A (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)154);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA2C8u, 0x1FA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2D0u;
label_1fa2d0:
    // 0x1fa2d0: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA2D0u;
    SET_GPR_U32(ctx, 31, 0x1FA2D8u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA2D0u, 0x1FA2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2D8u;
label_1fa2d8:
    // 0x1fa2d8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1FA2D8u;
    {
        const bool branch_taken_0x1fa2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2d8) {
            ctx->pc = 0x1FA478u;
            goto label_1fa478;
        }
    }
    ctx->pc = 0x1FA2E0u;
    // 0x1fa2e0: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FA2E0u;
    SET_GPR_U32(ctx, 31, 0x1FA2E8u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FA2E0u, 0x1FA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2E8u;
label_1fa2e8:
    // 0x1fa2e8: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1FA2E8u;
    {
        const bool branch_taken_0x1fa2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2E8u;
        // 0x1fa2ec: 0x8fa30710  lw          $v1, 0x710($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2e8) {
            ctx->pc = 0x1FA478u;
            goto label_1fa478;
        }
    }
    ctx->pc = 0x1FA2F0u;
    // 0x1fa2f0: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1FA2F0u;
    {
        const bool branch_taken_0x1fa2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2F0u;
        // 0x1fa2f4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2f0) {
            ctx->pc = 0x1FA478u;
            goto label_1fa478;
        }
    }
    ctx->pc = 0x1FA2F8u;
    // 0x1fa2f8: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1fa2fc: 0x2482b400  addiu       $v0, $a0, -0x4C00
    ctx->pc = 0x1fa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x1fa300: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa304: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa308: 0x84910008  lh          $s1, 0x8($a0)
    ctx->pc = 0x1fa308u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa30c: 0x1a800032  blez        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FA30Cu;
    {
        const bool branch_taken_0x1fa30c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1FA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA30Cu;
        // 0x1fa310: 0x84500004  lh          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa30c) {
            ctx->pc = 0x1FA3D8u;
            goto label_1fa3d8;
        }
    }
    ctx->pc = 0x1FA314u;
    // 0x1fa314: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1fa314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1fa318: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x1fa318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x1fa31c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1fa31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1fa320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA320u;
    {
        const bool branch_taken_0x1fa320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa320) {
            ctx->pc = 0x1FA340u;
            goto label_1fa340;
        }
    }
    ctx->pc = 0x1FA328u;
    // 0x1fa328: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA328u;
    {
        const bool branch_taken_0x1fa328 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA328u;
        // 0x1fa32c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa328) {
            ctx->pc = 0x1FA340u;
            goto label_1fa340;
        }
    }
    ctx->pc = 0x1FA330u;
    // 0x1fa330: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA330u;
    SET_GPR_U32(ctx, 31, 0x1FA338u);
    ctx->pc = 0x1FA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA330u;
    // 0x1fa334: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA330u, 0x1FA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA338u;
label_1fa338:
    // 0x1fa338: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA338u;
    {
        const bool branch_taken_0x1fa338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA338u;
        // 0x1fa33c: 0x2692ffff  addiu       $s2, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa338) {
            ctx->pc = 0x1FA3DCu;
            goto label_1fa3dc;
        }
    }
    ctx->pc = 0x1FA340u;
label_1fa340:
    // 0x1fa340: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1fa340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1fa344: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x1fa348: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1fa348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1fa34c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA34Cu;
    {
        const bool branch_taken_0x1fa34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA34Cu;
        // 0x1fa350: 0x2692ffff  addiu       $s2, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa34c) {
            ctx->pc = 0x1FA370u;
            goto label_1fa370;
        }
    }
    ctx->pc = 0x1FA354u;
    // 0x1fa354: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1fa354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1fa358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA358u;
    {
        const bool branch_taken_0x1fa358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA358u;
        // 0x1fa35c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa358) {
            ctx->pc = 0x1FA370u;
            goto label_1fa370;
        }
    }
    ctx->pc = 0x1FA360u;
    // 0x1fa360: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA360u;
    SET_GPR_U32(ctx, 31, 0x1FA368u);
    ctx->pc = 0x1FA364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA360u;
    // 0x1fa364: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA360u, 0x1FA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA368u;
label_1fa368:
    // 0x1fa368: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA368u;
    {
        const bool branch_taken_0x1fa368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa368) {
            ctx->pc = 0x1FA3E0u;
            goto label_1fa3e0;
        }
    }
    ctx->pc = 0x1FA370u;
label_1fa370:
    // 0x1fa370: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1fa370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1fa374: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x1fa378: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1fa378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1fa37c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA37Cu;
    {
        const bool branch_taken_0x1fa37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa37c) {
            ctx->pc = 0x1FA3A0u;
            goto label_1fa3a0;
        }
    }
    ctx->pc = 0x1FA384u;
    // 0x1fa384: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA384u;
    {
        const bool branch_taken_0x1fa384 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA384u;
        // 0x1fa388: 0x8fa80714  lw          $t0, 0x714($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa384) {
            ctx->pc = 0x1FA3A0u;
            goto label_1fa3a0;
        }
    }
    ctx->pc = 0x1FA38Cu;
    // 0x1fa38c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fa390: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA390u;
    SET_GPR_U32(ctx, 31, 0x1FA398u);
    ctx->pc = 0x1FA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA390u;
    // 0x1fa394: 0x2088023  subu        $s0, $s0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA390u, 0x1FA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA398u;
label_1fa398:
    // 0x1fa398: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA398u;
    {
        const bool branch_taken_0x1fa398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA398u;
        // 0x1fa39c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa398) {
            ctx->pc = 0x1FA3E0u;
            goto label_1fa3e0;
        }
    }
    ctx->pc = 0x1FA3A0u;
label_1fa3a0:
    // 0x1fa3a0: 0x2bc1021  addu        $v0, $s5, $gp
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 28)));
    // 0x1fa3a4: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x1fa3a8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1fa3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1fa3ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA3ACu;
    {
        const bool branch_taken_0x1fa3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3ACu;
        // 0x1fa3b0: 0x212102a  slt         $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3ac) {
            ctx->pc = 0x1FA3DCu;
            goto label_1fa3dc;
        }
    }
    ctx->pc = 0x1FA3B4u;
    // 0x1fa3b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA3B4u;
    {
        const bool branch_taken_0x1fa3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3B4u;
        // 0x1fa3b8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3b4) {
            ctx->pc = 0x1FA3E0u;
            goto label_1fa3e0;
        }
    }
    ctx->pc = 0x1FA3BCu;
    // 0x1fa3bc: 0x8fa20714  lw          $v0, 0x714($sp)
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa3c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fa3c4: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA3C4u;
    SET_GPR_U32(ctx, 31, 0x1FA3CCu);
    ctx->pc = 0x1FA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3C4u;
    // 0x1fa3c8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA3C4u, 0x1FA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3CCu;
label_1fa3cc:
    // 0x1fa3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA3CCu;
    {
        const bool branch_taken_0x1fa3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3CCu;
        // 0x1fa3d0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3cc) {
            ctx->pc = 0x1FA3E0u;
            goto label_1fa3e0;
        }
    }
    ctx->pc = 0x1FA3D4u;
    // 0x1fa3d4: 0x0  nop
    ctx->pc = 0x1fa3d4u;
    // NOP
label_1fa3d8:
    // 0x1fa3d8: 0x2692ffff  addiu       $s2, $s4, -0x1
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1fa3dc:
    // 0x1fa3dc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fa3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1fa3e0:
    // 0x1fa3e0: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa3e4: 0x2482b400  addiu       $v0, $a0, -0x4C00
    ctx->pc = 0x1fa3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x1fa3e8: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x1fa3e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1fa3ec: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1fa3f0: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x1fa3f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fa3f4: 0x84440034  lh          $a0, 0x34($v0)
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fa3f8: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x1fa3f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x1fa3fc: 0x12040017  beq         $s0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FA3FCu;
    {
        const bool branch_taken_0x1fa3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3FCu;
        // 0x1fa400: 0x8fa80714  lw          $t0, 0x714($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3fc) {
            ctx->pc = 0x1FA45Cu;
            goto label_1fa45c;
        }
    }
    ctx->pc = 0x1FA404u;
    // 0x1fa404: 0x8fa30718  lw          $v1, 0x718($sp)
    ctx->pc = 0x1fa404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1816)));
    // 0x1fa408: 0x2281021  addu        $v0, $s1, $t0
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1fa40c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fa410: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA414u;
    {
        const bool branch_taken_0x1fa414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA414u;
        // 0x1fa418: 0x8fa40718  lw          $a0, 0x718($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa414) {
            ctx->pc = 0x1FA428u;
            goto label_1fa428;
        }
    }
    ctx->pc = 0x1FA41Cu;
    // 0x1fa41c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fa420: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA420u;
    {
        const bool branch_taken_0x1fa420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA420u;
        // 0x1fa424: 0x488823  subu        $s1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa420) {
            ctx->pc = 0x1FA448u;
            goto label_1fa448;
        }
    }
    ctx->pc = 0x1FA428u;
label_1fa428:
    // 0x1fa428: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1fa428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fa42c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fa430: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fa430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA434u;
    {
        const bool branch_taken_0x1fa434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA434u;
        // 0x1fa438: 0x8fa80714  lw          $t0, 0x714($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa434) {
            ctx->pc = 0x1FA448u;
            goto label_1fa448;
        }
    }
    ctx->pc = 0x1FA43Cu;
    // 0x1fa43c: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fa440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa444: 0x28823  negu        $s1, $v0
    ctx->pc = 0x1fa444u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1fa448:
    // 0x1fa448: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1fa44c: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x1fa44cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fa450: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1fa450u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1fa454: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x1fa454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa458: 0x4880b  movn        $s1, $zero, $a0
    ctx->pc = 0x1fa458u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1fa45c:
    // 0x1fa45c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fa45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fa460: 0x2462b400  addiu       $v0, $v1, -0x4C00
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947840));
    // 0x1fa464: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1fa468: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa46c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa470: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x1fa470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x1fa474: 0xa4910008  sh          $s1, 0x8($a0)
    ctx->pc = 0x1fa474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 17));
label_1fa478:
    // 0x1fa478: 0x1a8000d1  blez        $s4, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1FA478u;
    {
        const bool branch_taken_0x1fa478 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1FA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA478u;
        // 0x1fa47c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa478) {
            ctx->pc = 0x1FA7C0u;
            goto label_1fa7c0;
        }
    }
    ctx->pc = 0x1FA480u;
    // 0x1fa480: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fa480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1fa484: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x1fa484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1fa488: 0x2482b400  addiu       $v0, $a0, -0x4C00
    ctx->pc = 0x1fa488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x1fa48c: 0x8fa80714  lw          $t0, 0x714($sp)
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa490: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa494: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fa494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fa498: 0x84890008  lh          $t1, 0x8($a0)
    ctx->pc = 0x1fa498u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa49c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4a0: 0x2888823  subu        $s1, $s4, $t0
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1fa4a4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fa4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa4a8: 0x84500004  lh          $s0, 0x4($v0)
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fa4ac: 0x131102a  slt         $v0, $t1, $s1
    ctx->pc = 0x1fa4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fa4b0: 0x3c0680fe  lui         $a2, 0x80FE
    ctx->pc = 0x1fa4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa4b4: 0x246435a0  addiu       $a0, $v1, 0x35A0
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13728));
    // 0x1fa4b8: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1fa4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fa4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4c0: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fa4c4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA4C4u;
    SET_GPR_U32(ctx, 31, 0x1FA4CCu);
    ctx->pc = 0x1FA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4C4u;
    // 0x1fa4c8: 0x122880b  movn        $s1, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA4C4u, 0x1FA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA4CCu;
label_1fa4cc:
    // 0x1fa4cc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa4d0: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fa4d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA4D4u;
    {
        const bool branch_taken_0x1fa4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4d4) {
            ctx->pc = 0x1FA4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA4D4u;
            // 0x1fa4d8: 0x28c20064  slti        $v0, $a2, 0x64 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA4F0u;
            goto label_1fa4f0;
        }
    }
    ctx->pc = 0x1FA4DCu;
    // 0x1fa4dc: 0x27b20310  addiu       $s2, $sp, 0x310
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1fa4e0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa4e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FA4E4u;
    {
        const bool branch_taken_0x1fa4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4E4u;
        // 0x1fa4e8: 0x24a51fd8  addiu       $a1, $a1, 0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4e4) {
            ctx->pc = 0x1FA518u;
            goto label_1fa518;
        }
    }
    ctx->pc = 0x1FA4ECu;
    // 0x1fa4ec: 0x0  nop
    ctx->pc = 0x1fa4ecu;
    // NOP
label_1fa4f0:
    // 0x1fa4f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA4F0u;
    {
        const bool branch_taken_0x1fa4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4f0) {
            ctx->pc = 0x1FA4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA4F0u;
            // 0x1fa4f4: 0x28c203e8  slti        $v0, $a2, 0x3E8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA508u;
            goto label_1fa508;
        }
    }
    ctx->pc = 0x1FA4F8u;
    // 0x1fa4f8: 0x27b20310  addiu       $s2, $sp, 0x310
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1fa4fc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa500: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA500u;
    {
        const bool branch_taken_0x1fa500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA500u;
        // 0x1fa504: 0x24a51fe0  addiu       $a1, $a1, 0x1FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa500) {
            ctx->pc = 0x1FA518u;
            goto label_1fa518;
        }
    }
    ctx->pc = 0x1FA508u;
label_1fa508:
    // 0x1fa508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA508u;
    {
        const bool branch_taken_0x1fa508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA508u;
        // 0x1fa50c: 0x27b20310  addiu       $s2, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa508) {
            ctx->pc = 0x1FA528u;
            goto label_1fa528;
        }
    }
    ctx->pc = 0x1FA510u;
    // 0x1fa510: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa514: 0x24a51fe8  addiu       $a1, $a1, 0x1FE8
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8168));
label_1fa518:
    // 0x1fa518: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FA518u;
    SET_GPR_U32(ctx, 31, 0x1FA520u);
    ctx->pc = 0x1FA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA518u;
    // 0x1fa51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FA518u, 0x1FA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA520u;
label_1fa520:
    // 0x1fa520: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA520u;
    {
        const bool branch_taken_0x1fa520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA520u;
        // 0x1fa524: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa520) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA528u;
label_1fa528:
    // 0x1fa528: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa52c: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x1fa52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
    // 0x1fa530: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FA530u;
    SET_GPR_U32(ctx, 31, 0x1FA538u);
    ctx->pc = 0x1FA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA530u;
    // 0x1fa534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FA530u, 0x1FA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA538u;
label_1fa538:
    // 0x1fa538: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x1fa538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fa53c:
    // 0x1fa53c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA53Cu;
    {
        const bool branch_taken_0x1fa53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA53Cu;
        // 0x1fa540: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa53c) {
            ctx->pc = 0x1FA558u;
            goto label_1fa558;
        }
    }
    ctx->pc = 0x1FA544u;
    // 0x1fa544: 0x27b00610  addiu       $s0, $sp, 0x610
    ctx->pc = 0x1fa544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x1fa548: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa54c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FA54Cu;
    {
        const bool branch_taken_0x1fa54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA54Cu;
        // 0x1fa550: 0x24a51ff8  addiu       $a1, $a1, 0x1FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa54c) {
            ctx->pc = 0x1FA588u;
            goto label_1fa588;
        }
    }
    ctx->pc = 0x1FA554u;
    // 0x1fa554: 0x0  nop
    ctx->pc = 0x1fa554u;
    // NOP
label_1fa558:
    // 0x1fa558: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x1fa558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fa55c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA55Cu;
    {
        const bool branch_taken_0x1fa55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA55Cu;
        // 0x1fa560: 0x286203e8  slti        $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa55c) {
            ctx->pc = 0x1FA578u;
            goto label_1fa578;
        }
    }
    ctx->pc = 0x1FA564u;
    // 0x1fa564: 0x27b00610  addiu       $s0, $sp, 0x610
    ctx->pc = 0x1fa564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x1fa568: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa56c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA56Cu;
    {
        const bool branch_taken_0x1fa56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA56Cu;
        // 0x1fa570: 0x24a52000  addiu       $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa56c) {
            ctx->pc = 0x1FA588u;
            goto label_1fa588;
        }
    }
    ctx->pc = 0x1FA574u;
    // 0x1fa574: 0x0  nop
    ctx->pc = 0x1fa574u;
    // NOP
label_1fa578:
    // 0x1fa578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA578u;
    {
        const bool branch_taken_0x1fa578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA578u;
        // 0x1fa57c: 0x27b00610  addiu       $s0, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa578) {
            ctx->pc = 0x1FA5A0u;
            goto label_1fa5a0;
        }
    }
    ctx->pc = 0x1FA580u;
    // 0x1fa580: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa584: 0x24a52008  addiu       $a1, $a1, 0x2008
    ctx->pc = 0x1fa584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8200));
label_1fa588:
    // 0x1fa588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa58c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FA58Cu;
    SET_GPR_U32(ctx, 31, 0x1FA594u);
    ctx->pc = 0x1FA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA58Cu;
    // 0x1fa590: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FA58Cu, 0x1FA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA594u;
label_1fa594:
    // 0x1fa594: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA594u;
    {
        const bool branch_taken_0x1fa594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA594u;
        // 0x1fa598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa594) {
            ctx->pc = 0x1FA5B4u;
            goto label_1fa5b4;
        }
    }
    ctx->pc = 0x1FA59Cu;
    // 0x1fa59c: 0x0  nop
    ctx->pc = 0x1fa59cu;
    // NOP
label_1fa5a0:
    // 0x1fa5a0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fa5a4: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x1fa5a8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FA5A8u;
    SET_GPR_U32(ctx, 31, 0x1FA5B0u);
    ctx->pc = 0x1FA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5A8u;
    // 0x1fa5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FA5A8u, 0x1FA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5B0u;
label_1fa5b0:
    // 0x1fa5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa5b4:
    // 0x1fa5b4: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x1FA5B4u;
    SET_GPR_U32(ctx, 31, 0x1FA5BCu);
    ctx->pc = 0x1FA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5B4u;
    // 0x1fa5b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x1FA5B4u, 0x1FA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5BCu;
label_1fa5bc:
    // 0x1fa5bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5c0: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x1fa5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1fa5c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fa5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5c8: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FA5C8u;
    SET_GPR_U32(ctx, 31, 0x1FA5D0u);
    ctx->pc = 0x1FA5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5C8u;
    // 0x1fa5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FA5C8u, 0x1FA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5D0u;
label_1fa5d0:
    // 0x1fa5d0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fa5d4: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fa5d8: 0x24842018  addiu       $a0, $a0, 0x2018
    ctx->pc = 0x1fa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8216));
    // 0x1fa5dc: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fa5e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5e4: 0x24a5ff92  addiu       $a1, $a1, -0x6E
    ctx->pc = 0x1fa5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967186));
    // 0x1fa5e8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA5E8u;
    SET_GPR_U32(ctx, 31, 0x1FA5F0u);
    ctx->pc = 0x1FA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5E8u;
    // 0x1fa5ec: 0x24c60082  addiu       $a2, $a2, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA5E8u, 0x1FA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5F0u;
label_1fa5f0:
    // 0x1fa5f0: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x1fa5f4: 0x3c0680fe  lui         $a2, 0x80FE
    ctx->pc = 0x1fa5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa5f8: 0x250435a0  addiu       $a0, $t0, 0x35A0
    ctx->pc = 0x1fa5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 13728));
    // 0x1fa5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa600: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1fa600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fa604: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fa608: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA608u;
    SET_GPR_U32(ctx, 31, 0x1FA610u);
    ctx->pc = 0x1FA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA608u;
    // 0x1fa60c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA608u, 0x1FA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA610u;
label_1fa610:
    // 0x1fa610: 0x8fa20714  lw          $v0, 0x714($sp)
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa614: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1FA614u;
    {
        const bool branch_taken_0x1fa614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa614) {
            ctx->pc = 0x1FA850u;
            goto label_1fa850;
        }
    }
    ctx->pc = 0x1FA61Cu;
    // 0x1fa61c: 0x0  nop
    ctx->pc = 0x1fa61cu;
    // NOP
label_1fa620:
    // 0x1fa620: 0x27a30300  addiu       $v1, $sp, 0x300
    ctx->pc = 0x1fa620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1fa624: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1fa624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa628: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1fa628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa62c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1fa62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1fa630: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1fa630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1fa634: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fa634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa638: 0xc0a3b04  jal         func_28EC10
    ctx->pc = 0x1FA638u;
    SET_GPR_U32(ctx, 31, 0x1FA640u);
    ctx->pc = 0x1FA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA638u;
    // 0x1fa63c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC10u, 0x1FA638u, 0x1FA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA640u;
label_1fa640:
    // 0x1fa640: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fa640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1fa644: 0x8c8283c0  lw          $v0, -0x7C40($a0)
    ctx->pc = 0x1fa644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fa648: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fa648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fa64c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA64Cu;
    {
        const bool branch_taken_0x1fa64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa64c) {
            ctx->pc = 0x1FA668u;
            goto label_1fa668;
        }
    }
    ctx->pc = 0x1FA654u;
    // 0x1fa654: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x1FA654u;
    SET_GPR_U32(ctx, 31, 0x1FA65Cu);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x1FA654u, 0x1FA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA65Cu;
label_1fa65c:
    // 0x1fa65c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa660: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA660u;
    {
        const bool branch_taken_0x1fa660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa660) {
            ctx->pc = 0x1FA678u;
            goto label_1fa678;
        }
    }
    ctx->pc = 0x1FA668u;
label_1fa668:
    // 0x1fa668: 0x3c0780fe  lui         $a3, 0x80FE
    ctx->pc = 0x1fa668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa66c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA66Cu;
    {
        const bool branch_taken_0x1fa66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA66Cu;
        // 0x1fa670: 0x34e7fefe  ori         $a3, $a3, 0xFEFE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65278);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa66c) {
            ctx->pc = 0x1FA694u;
            goto label_1fa694;
        }
    }
    ctx->pc = 0x1FA674u;
    // 0x1fa674: 0x0  nop
    ctx->pc = 0x1fa674u;
    // NOP
label_1fa678:
    // 0x1fa678: 0xc07f0c4  jal         func_1FC310
    ctx->pc = 0x1FA678u;
    SET_GPR_U32(ctx, 31, 0x1FA680u);
    ctx->pc = 0x1FA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA678u;
    // 0x1fa67c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC310u, 0x1FA678u, 0x1FA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA680u;
label_1fa680:
    // 0x1fa680: 0x3c03808e  lui         $v1, 0x808E
    ctx->pc = 0x1fa680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32910 << 16));
    // 0x1fa684: 0x3c0780fe  lui         $a3, 0x80FE
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa688: 0x34638e8e  ori         $v1, $v1, 0x8E8E
    ctx->pc = 0x1fa688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36494);
    // 0x1fa68c: 0x34e7fefe  ori         $a3, $a3, 0xFEFE
    ctx->pc = 0x1fa68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65278);
    // 0x1fa690: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x1fa690u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1fa694:
    // 0x1fa694: 0x96030026  lhu         $v1, 0x26($s0)
    ctx->pc = 0x1fa694u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x1fa698: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1fa698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fa69c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FA69Cu;
    {
        const bool branch_taken_0x1fa69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA69Cu;
        // 0x1fa6a0: 0x3c08003b  lui         $t0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa69c) {
            ctx->pc = 0x1FA738u;
            goto label_1fa738;
        }
    }
    ctx->pc = 0x1FA6A4u;
    // 0x1fa6a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa6a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fa6ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa6b0: 0x8c6335e0  lw          $v1, 0x35E0($v1)
    ctx->pc = 0x1fa6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13792)));
    // 0x1fa6b4: 0x600008  jr          $v1
    ctx->pc = 0x1FA6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA6C0u: goto label_1fa6c0;
            case 0x1FA708u: goto label_1fa708;
            case 0x1FA734u: goto label_1fa734;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA6BCu;
    // 0x1fa6bc: 0x0  nop
    ctx->pc = 0x1fa6bcu;
    // NOP
label_1fa6c0:
    // 0x1fa6c0: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1fa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fa6c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1fa6c8: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x1fa6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fa6cc: 0x248435b0  addiu       $a0, $a0, 0x35B0
    ctx->pc = 0x1fa6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13744));
    // 0x1fa6d0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1fa6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa6d4: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1fa6d8: 0x24c6000e  addiu       $a2, $a2, 0xE
    ctx->pc = 0x1fa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x1fa6dc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA6DCu;
    SET_GPR_U32(ctx, 31, 0x1FA6E4u);
    ctx->pc = 0x1FA6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6DCu;
    // 0x1fa6e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA6DCu, 0x1FA6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6E4u;
label_1fa6e4:
    // 0x1fa6e4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fa6e8: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1fa6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fa6ec: 0x24842020  addiu       $a0, $a0, 0x2020
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8224));
    // 0x1fa6f0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1fa6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fa6f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa6f8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA6F8u;
    SET_GPR_U32(ctx, 31, 0x1FA700u);
    ctx->pc = 0x1FA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6F8u;
    // 0x1fa6fc: 0x24a501d6  addiu       $a1, $a1, 0x1D6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 470));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA6F8u, 0x1FA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA700u;
label_1fa700:
    // 0x1fa700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FA700u;
    {
        const bool branch_taken_0x1fa700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA700u;
        // 0x1fa704: 0x3c08003b  lui         $t0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa700) {
            ctx->pc = 0x1FA738u;
            goto label_1fa738;
        }
    }
    ctx->pc = 0x1FA708u;
label_1fa708:
    // 0x1fa708: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1fa708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fa70c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1fa70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1fa710: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fa714: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1fa718: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1fa718u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa71c: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x1fa720: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1fa724: 0x24c6000e  addiu       $a2, $a2, 0xE
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x1fa728: 0x34e7fe00  ori         $a3, $a3, 0xFE00
    ctx->pc = 0x1fa728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65024);
    // 0x1fa72c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA72Cu;
    SET_GPR_U32(ctx, 31, 0x1FA734u);
    ctx->pc = 0x1FA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA72Cu;
    // 0x1fa730: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA72Cu, 0x1FA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA734u;
label_1fa734:
    // 0x1fa734: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
label_1fa738:
    // 0x1fa738: 0x2505b400  addiu       $a1, $t0, -0x4C00
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947840));
    // 0x1fa73c: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x1fa73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x1fa740: 0x84430034  lh          $v1, 0x34($v0)
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fa744: 0x56230010  bnel        $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA744u;
    {
        const bool branch_taken_0x1fa744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa744) {
            ctx->pc = 0x1FA748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA744u;
            // 0x1fa748: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA788u;
            goto label_1fa788;
        }
    }
    ctx->pc = 0x1FA74Cu;
    // 0x1fa74c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fa74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa750: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x1fa750u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fa754: 0x1810  mfhi        $v1
    ctx->pc = 0x1fa754u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1fa758: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fa758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fa75c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1fa760: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA760u;
    {
        const bool branch_taken_0x1fa760 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA760u;
        // 0x1fa764: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa760) {
            ctx->pc = 0x1FA778u;
            goto label_1fa778;
        }
    }
    ctx->pc = 0x1FA768u;
    // 0x1fa768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa76c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FA76Cu;
    {
        const bool branch_taken_0x1fa76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA76Cu;
        // 0x1fa770: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa76c) {
            ctx->pc = 0x1FA7A0u;
            goto label_1fa7a0;
        }
    }
    ctx->pc = 0x1FA774u;
    // 0x1fa774: 0x0  nop
    ctx->pc = 0x1fa774u;
    // NOP
label_1fa778:
    // 0x1fa778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fa778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa77c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA77Cu;
    {
        const bool branch_taken_0x1fa77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA77Cu;
        // 0x1fa780: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa77c) {
            ctx->pc = 0x1FA7A0u;
            goto label_1fa7a0;
        }
    }
    ctx->pc = 0x1FA784u;
    // 0x1fa784: 0x0  nop
    ctx->pc = 0x1fa784u;
    // NOP
label_1fa788:
    // 0x1fa788: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fa78c: 0x263001a  div         $zero, $s3, $v1
    ctx->pc = 0x1fa78cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fa790: 0x1010  mfhi        $v0
    ctx->pc = 0x1fa790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1fa794: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fa798: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa79c: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x1fa79cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
label_1fa7a0:
    // 0x1fa7a0: 0x8fa30714  lw          $v1, 0x714($sp)
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa7a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fa7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fa7a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fa7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fa7ac: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1fa7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa7b0: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x1FA7B0u;
    {
        const bool branch_taken_0x1fa7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B0u;
        // 0x1fa7b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b0) {
            ctx->pc = 0x1FA620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa620;
        }
    }
    ctx->pc = 0x1FA7B8u;
    // 0x1fa7b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FA7B8u;
    {
        const bool branch_taken_0x1fa7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7b8) {
            ctx->pc = 0x1FA850u;
            goto label_1fa850;
        }
    }
    ctx->pc = 0x1FA7C0u;
label_1fa7c0:
    // 0x1fa7c0: 0x3c0680fe  lui         $a2, 0x80FE
    ctx->pc = 0x1fa7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa7c4: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x1fa7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x1fa7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7cc: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1fa7ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fa7d0: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fa7d4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA7D4u;
    SET_GPR_U32(ctx, 31, 0x1FA7DCu);
    ctx->pc = 0x1FA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7D4u;
    // 0x1fa7d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA7D4u, 0x1FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7DCu;
label_1fa7dc:
    // 0x1fa7dc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1fa7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1fa7e0: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1fa7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fa7e4: 0x3c0780fe  lui         $a3, 0x80FE
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33022 << 16));
    // 0x1fa7e8: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fa7ec: 0x3c08000b  lui         $t0, 0xB
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)11 << 16));
    // 0x1fa7f0: 0x248435d0  addiu       $a0, $a0, 0x35D0
    ctx->pc = 0x1fa7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13776));
    // 0x1fa7f4: 0x3508009b  ori         $t0, $t0, 0x9B
    ctx->pc = 0x1fa7f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)155);
    // 0x1fa7f8: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1fa7fc: 0x24c6000e  addiu       $a2, $a2, 0xE
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x1fa800: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FA800u;
    SET_GPR_U32(ctx, 31, 0x1FA808u);
    ctx->pc = 0x1FA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA800u;
    // 0x1fa804: 0x34e7fefe  ori         $a3, $a3, 0xFEFE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65278);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FA800u, 0x1FA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA808u;
label_1fa808:
    // 0x1fa808: 0x8fa80714  lw          $t0, 0x714($sp)
    ctx->pc = 0x1fa808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa80c: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA80Cu;
    {
        const bool branch_taken_0x1fa80c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA80Cu;
        // 0x1fa810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa80c) {
            ctx->pc = 0x1FA850u;
            goto label_1fa850;
        }
    }
    ctx->pc = 0x1FA814u;
    // 0x1fa814: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fa818: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fa818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa81c: 0x2447b400  addiu       $a3, $v0, -0x4C00
    ctx->pc = 0x1fa81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x1fa820: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fa824: 0x0  nop
    ctx->pc = 0x1fa824u;
    // NOP
label_1fa828:
    // 0x1fa828: 0x265001a  div         $zero, $s3, $a1
    ctx->pc = 0x1fa828u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fa82c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fa82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fa830: 0x8fa80714  lw          $t0, 0x714($sp)
    ctx->pc = 0x1fa830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1fa834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fa834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa838: 0x88182a  slt         $v1, $a0, $t0
    ctx->pc = 0x1fa838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1fa83c: 0x1010  mfhi        $v0
    ctx->pc = 0x1fa83cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1fa840: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fa840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fa844: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fa844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fa848: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA848u;
    {
        const bool branch_taken_0x1fa848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA848u;
        // 0x1fa84c: 0xa4460040  sh          $a2, 0x40($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa848) {
            ctx->pc = 0x1FA828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa828;
        }
    }
    ctx->pc = 0x1FA850u;
label_1fa850:
    // 0x1fa850: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA850u;
    {
        const bool branch_taken_0x1fa850 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1FA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA850u;
        // 0x1fa854: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa850) {
            ctx->pc = 0x1FA860u;
            goto label_1fa860;
        }
    }
    ctx->pc = 0x1FA858u;
    // 0x1fa858: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fa858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x1fa85c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fa85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_1fa860:
    // 0x1fa860: 0x2784a850  addiu       $a0, $gp, -0x57B0
    ctx->pc = 0x1fa860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x1fa864: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1fa868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa86c: 0x30430090  andi        $v1, $v0, 0x90
    ctx->pc = 0x1fa86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x1fa870: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA870u;
    {
        const bool branch_taken_0x1fa870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA870u;
        // 0x1fa874: 0x30420060  andi        $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa870) {
            ctx->pc = 0x1FA8B0u;
            goto label_1fa8b0;
        }
    }
    ctx->pc = 0x1FA878u;
    // 0x1fa878: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA878u;
    {
        const bool branch_taken_0x1fa878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA878u;
        // 0x1fa87c: 0xdfb00720  ld          $s0, 0x720($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa878) {
            ctx->pc = 0x1FA8B4u;
            goto label_1fa8b4;
        }
    }
    ctx->pc = 0x1FA880u;
    // 0x1fa880: 0x8fa80710  lw          $t0, 0x710($sp)
    ctx->pc = 0x1fa880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x1fa884: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA884u;
    {
        const bool branch_taken_0x1fa884 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA884u;
        // 0x1fa888: 0xdfb10728  ld          $s1, 0x728($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa884) {
            ctx->pc = 0x1FA8B8u;
            goto label_1fa8b8;
        }
    }
    ctx->pc = 0x1FA88Cu;
    // 0x1fa88c: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FA88Cu;
    SET_GPR_U32(ctx, 31, 0x1FA894u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FA88Cu, 0x1FA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA894u;
label_1fa894:
    // 0x1fa894: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA894u;
    {
        const bool branch_taken_0x1fa894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa894) {
            ctx->pc = 0x1FA898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA894u;
            // 0x1fa898: 0xdfb00720  ld          $s0, 0x720($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA8B4u;
            goto label_1fa8b4;
        }
    }
    ctx->pc = 0x1FA89Cu;
    // 0x1fa89c: 0xc092940  jal         func_24A500
    ctx->pc = 0x1FA89Cu;
    SET_GPR_U32(ctx, 31, 0x1FA8A4u);
    ctx->pc = 0x1FA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA89Cu;
    // 0x1fa8a0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1FA89Cu, 0x1FA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8A4u;
label_1fa8a4:
    // 0x1fa8a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8a8: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1FA8A8u;
    SET_GPR_U32(ctx, 31, 0x1FA8B0u);
    ctx->pc = 0x1FA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8A8u;
    // 0x1fa8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1FA8A8u, 0x1FA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B0u;
label_1fa8b0:
    // 0x1fa8b0: 0xdfb00720  ld          $s0, 0x720($sp)
    ctx->pc = 0x1fa8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1824)));
label_1fa8b4:
    // 0x1fa8b4: 0xdfb10728  ld          $s1, 0x728($sp)
    ctx->pc = 0x1fa8b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1832)));
label_1fa8b8:
    // 0x1fa8b8: 0xdfb20730  ld          $s2, 0x730($sp)
    ctx->pc = 0x1fa8b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x1fa8bc: 0xdfb30738  ld          $s3, 0x738($sp)
    ctx->pc = 0x1fa8bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1848)));
    // 0x1fa8c0: 0xdfb40740  ld          $s4, 0x740($sp)
    ctx->pc = 0x1fa8c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1856)));
    // 0x1fa8c4: 0xdfb50748  ld          $s5, 0x748($sp)
    ctx->pc = 0x1fa8c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1864)));
    // 0x1fa8c8: 0xdfb60750  ld          $s6, 0x750($sp)
    ctx->pc = 0x1fa8c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x1fa8cc: 0xdfb70758  ld          $s7, 0x758($sp)
    ctx->pc = 0x1fa8ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1880)));
    // 0x1fa8d0: 0xdfbe0760  ld          $fp, 0x760($sp)
    ctx->pc = 0x1fa8d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1888)));
    // 0x1fa8d4: 0xdfbf0768  ld          $ra, 0x768($sp)
    ctx->pc = 0x1fa8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1896)));
    // 0x1fa8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8D8u;
        // 0x1fa8dc: 0x27bd0770  addiu       $sp, $sp, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA8E0u;
}
