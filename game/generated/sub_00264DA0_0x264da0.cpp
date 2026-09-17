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

// Function: sub_00264DA0
// Address: 0x264da0 - 0x2652d8
void sub_00264DA0_0x264da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264DA0_0x264da0");
#endif

    switch (ctx->pc) {
        case 0x264df0u: goto label_264df0;
        case 0x265040u: goto label_265040;
        case 0x265060u: goto label_265060;
        case 0x2650b8u: goto label_2650b8;
        case 0x265198u: goto label_265198;
        case 0x2651b4u: goto label_2651b4;
        case 0x2651c8u: goto label_2651c8;
        case 0x265208u: goto label_265208;
        case 0x265250u: goto label_265250;
        case 0x265278u: goto label_265278;
        default: break;
    }

    ctx->pc = 0x264da0u;

    // 0x264da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264da4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x264da8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x264da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x264dac: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x264dacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x264db0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x264db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x264db4: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x264db4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x264db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264dbc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x264dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x264dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x264dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x264dc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x264dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264dc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x264dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x264dcc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x264dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264dd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x264dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x264dd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x264dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264dd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x264dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x264ddc: 0x24548858  addiu       $s4, $v0, -0x77A8
    ctx->pc = 0x264ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x264de0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x264de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x264de4: 0x27d52fd0  addiu       $s5, $fp, 0x2FD0
    ctx->pc = 0x264de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 12240));
    // 0x264de8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x264de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x264dec: 0x26f688d0  addiu       $s6, $s7, -0x7730
    ctx->pc = 0x264decu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936784));
label_264df0:
    // 0x264df0: 0x2402048c  addiu       $v0, $zero, 0x48C
    ctx->pc = 0x264df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x264df4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x264df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x264df8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x264df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264dfc: 0x2483ee00  addiu       $v1, $a0, -0x1200
    ctx->pc = 0x264dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x264e00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x264e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264e04: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x264E04u;
    {
        const bool branch_taken_0x264e04 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x264E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E04u;
        // 0x264e08: 0xaf83aa78  sw          $v1, -0x5588($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e04) {
            ctx->pc = 0x264E18u;
            goto label_264e18;
        }
    }
    ctx->pc = 0x264E0Cu;
    // 0x264e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x264E10u;
    {
        const bool branch_taken_0x264e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E10u;
        // 0x264e14: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e10) {
            ctx->pc = 0x264E1Cu;
            goto label_264e1c;
        }
    }
    ctx->pc = 0x264E18u;
label_264e18:
    // 0x264e18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x264e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_264e1c:
    // 0x264e1c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e20: 0x26e488d0  addiu       $a0, $s7, -0x7730
    ctx->pc = 0x264e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936784));
    // 0x264e24: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x264e24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x264e28: 0xa4530004  sh          $s3, 0x4($v0)
    ctx->pc = 0x264e28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x264e2c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x264e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x264e30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264e34: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x264E34u;
    {
        const bool branch_taken_0x264e34 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x264E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E34u;
        // 0x264e38: 0xaf82aa7c  sw          $v0, -0x5584($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e34) {
            ctx->pc = 0x264E48u;
            goto label_264e48;
        }
    }
    ctx->pc = 0x264E3Cu;
    // 0x264e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264E3Cu;
    {
        const bool branch_taken_0x264e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E3Cu;
        // 0x264e40: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e3c) {
            ctx->pc = 0x264E4Cu;
            goto label_264e4c;
        }
    }
    ctx->pc = 0x264E44u;
    // 0x264e44: 0x0  nop
    ctx->pc = 0x264e44u;
    // NOP
label_264e48:
    // 0x264e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x264e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_264e4c:
    // 0x264e4c: 0xaf82aa80  sw          $v0, -0x5580($gp)
    ctx->pc = 0x264e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945408), GPR_U32(ctx, 2));
    // 0x264e50: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e58: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x264e58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x264e5c: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x264e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x264e60: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x264e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x264e64: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e68: 0x8c62069c  lw          $v0, 0x69C($v1)
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x264e6c: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x264e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x264e70: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e74: 0xac72003c  sw          $s2, 0x3C($v1)
    ctx->pc = 0x264e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 18));
    // 0x264e78: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e7c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x264e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x264e80: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e84: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x264e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x264e88: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e8c: 0xac520068  sw          $s2, 0x68($v0)
    ctx->pc = 0x264e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 18));
    // 0x264e90: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e94: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x264e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x264e98: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264e9c: 0xac5200c4  sw          $s2, 0xC4($v0)
    ctx->pc = 0x264e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 18));
    // 0x264ea0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ea4: 0xac720064  sw          $s2, 0x64($v1)
    ctx->pc = 0x264ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 18));
    // 0x264ea8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264eac: 0xac520044  sw          $s2, 0x44($v0)
    ctx->pc = 0x264eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 18));
    // 0x264eb0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264eb4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x264eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x264eb8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ebc: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x264ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x264ec0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ec4: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x264ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x264ec8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ecc: 0xac52007c  sw          $s2, 0x7C($v0)
    ctx->pc = 0x264eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 18));
    // 0x264ed0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ed4: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x264ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x264ed8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264edc: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x264edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x264ee0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ee4: 0xac72005c  sw          $s2, 0x5C($v1)
    ctx->pc = 0x264ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 18));
    // 0x264ee8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264eec: 0xac520070  sw          $s2, 0x70($v0)
    ctx->pc = 0x264eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 18));
    // 0x264ef0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ef4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x264ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x264ef8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264efc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x264efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x264f00: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f04: 0xac720058  sw          $s2, 0x58($v1)
    ctx->pc = 0x264f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 18));
    // 0x264f08: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f0c: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x264f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x264f10: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f14: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x264f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x264f18: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f1c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x264f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x264f20: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f24: 0xac7200c8  sw          $s2, 0xC8($v1)
    ctx->pc = 0x264f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 18));
    // 0x264f28: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f2c: 0xac400314  sw          $zero, 0x314($v0)
    ctx->pc = 0x264f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 788), GPR_U32(ctx, 0));
    // 0x264f30: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f34: 0xac720310  sw          $s2, 0x310($v1)
    ctx->pc = 0x264f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 18));
    // 0x264f38: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f3c: 0xac400318  sw          $zero, 0x318($v0)
    ctx->pc = 0x264f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 792), GPR_U32(ctx, 0));
    // 0x264f40: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f44: 0xac720094  sw          $s2, 0x94($v1)
    ctx->pc = 0x264f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 18));
    // 0x264f48: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f4c: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x264f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x264f50: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f54: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x264f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x264f58: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x264f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
    // 0x264f5c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f60: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x264f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x264f64: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f68: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x264f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x264f6c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f70: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x264f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x264f74: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f78: 0xac600144  sw          $zero, 0x144($v1)
    ctx->pc = 0x264f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
    // 0x264f7c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f80: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x264f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x264f84: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f88: 0xac60020c  sw          $zero, 0x20C($v1)
    ctx->pc = 0x264f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 0));
    // 0x264f8c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f90: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x264f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x264f94: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264f98: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x264f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
    // 0x264f9c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fa0: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x264fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x264fa4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fa8: 0xac600248  sw          $zero, 0x248($v1)
    ctx->pc = 0x264fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 0));
    // 0x264fac: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fb0: 0xac400250  sw          $zero, 0x250($v0)
    ctx->pc = 0x264fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 0));
    // 0x264fb4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fb8: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x264fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x264fbc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fc0: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x264fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x264fc4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fc8: 0xac72011c  sw          $s2, 0x11C($v1)
    ctx->pc = 0x264fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 18));
    // 0x264fcc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fd0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x264fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x264fd4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fd8: 0xac600258  sw          $zero, 0x258($v1)
    ctx->pc = 0x264fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 0));
    // 0x264fdc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fe0: 0xac400264  sw          $zero, 0x264($v0)
    ctx->pc = 0x264fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 0));
    // 0x264fe4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264fe8: 0xac600268  sw          $zero, 0x268($v1)
    ctx->pc = 0x264fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 0));
    // 0x264fec: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ff0: 0xac40026c  sw          $zero, 0x26C($v0)
    ctx->pc = 0x264ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
    // 0x264ff4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264ff8: 0xac600270  sw          $zero, 0x270($v1)
    ctx->pc = 0x264ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 624), GPR_U32(ctx, 0));
    // 0x264ffc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265000: 0xac400274  sw          $zero, 0x274($v0)
    ctx->pc = 0x265000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
    // 0x265004: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265008: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x265008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x26500c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265010: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x265010u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x265014: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265018: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x265018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x26501c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265020: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x265020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x265024: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265028: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x265028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x26502c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265030: 0xac5202b0  sw          $s2, 0x2B0($v0)
    ctx->pc = 0x265030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 18));
    // 0x265034: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265038: 0xac6002b4  sw          $zero, 0x2B4($v1)
    ctx->pc = 0x265038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 0));
    // 0x26503c: 0x0  nop
    ctx->pc = 0x26503cu;
    // NOP
label_265040:
    // 0x265040: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265044: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x265044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265048: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26504c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265050: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x265050u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x265054: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x265054u;
    {
        const bool branch_taken_0x265054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x265058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265054u;
        // 0x265058: 0xac60027c  sw          $zero, 0x27C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265054) {
            ctx->pc = 0x265040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265040;
        }
    }
    ctx->pc = 0x26505Cu;
    // 0x26505c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265060:
    // 0x265060: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265064: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x265064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265068: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26506c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265070: 0x28a40014  slti        $a0, $a1, 0x14
    ctx->pc = 0x265070u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x265074: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x265074u;
    {
        const bool branch_taken_0x265074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x265078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265074u;
        // 0x265078: 0xac6002c0  sw          $zero, 0x2C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265074) {
            ctx->pc = 0x265060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265060;
        }
    }
    ctx->pc = 0x26507Cu;
    // 0x26507c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265080: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x265080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x265084: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x265084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x265088: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26508c: 0xac6000e0  sw          $zero, 0xE0($v1)
    ctx->pc = 0x26508cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
    // 0x265090: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x265090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
    // 0x265094: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265098: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x265098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x26509c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2650a0: 0xac6000ec  sw          $zero, 0xEC($v1)
    ctx->pc = 0x2650a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
    // 0x2650a4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2650a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2650a8: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x2650a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2650ac: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2650acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2650b0: 0xc099132  jal         func_2644C8
    ctx->pc = 0x2650B0u;
    SET_GPR_U32(ctx, 31, 0x2650B8u);
    ctx->pc = 0x2650B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650B0u;
    // 0x2650b4: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C8u, 0x2650B0u, 0x2650B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650B8u;
label_2650b8:
    // 0x2650b8: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2650B8u;
    {
        const bool branch_taken_0x2650b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2650b8) {
            ctx->pc = 0x2650BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2650B8u;
            // 0x2650bc: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2650F0u;
            goto label_2650f0;
        }
    }
    ctx->pc = 0x2650C0u;
    // 0x2650c0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2650c4: 0x27c32fd0  addiu       $v1, $fp, 0x2FD0
    ctx->pc = 0x2650c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12240));
    // 0x2650c8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2650c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2650cc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2650ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2650d0: 0x8866000b  lwl         $a2, 0xB($v1)
    ctx->pc = 0x2650d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2650d4: 0x98660008  lwr         $a2, 0x8($v1)
    ctx->pc = 0x2650d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2650d8: 0xb04503b5  sdl         $a1, 0x3B5($v0)
    ctx->pc = 0x2650d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 949); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2650dc: 0xb44503ae  sdr         $a1, 0x3AE($v0)
    ctx->pc = 0x2650dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2650e0: 0xa84603b9  swl         $a2, 0x3B9($v0)
    ctx->pc = 0x2650e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 953); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2650e4: 0xb84603b6  swr         $a2, 0x3B6($v0)
    ctx->pc = 0x2650e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 950); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2650e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2650E8u;
    {
        const bool branch_taken_0x2650e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650E8u;
        // 0x2650ec: 0x8f84aa80  lw          $a0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650e8) {
            ctx->pc = 0x26512Cu;
            goto label_26512c;
        }
    }
    ctx->pc = 0x2650F0u;
label_2650f0:
    // 0x2650f0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2650f4: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2650f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2650fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265104: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x265108: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x265108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x26510c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x26510cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x265110: 0x8846000b  lwl         $a2, 0xB($v0)
    ctx->pc = 0x265110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x265114: 0x98460008  lwr         $a2, 0x8($v0)
    ctx->pc = 0x265114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x265118: 0xb0a403b5  sdl         $a0, 0x3B5($a1)
    ctx->pc = 0x265118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 949); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26511c: 0xb4a403ae  sdr         $a0, 0x3AE($a1)
    ctx->pc = 0x26511cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x265120: 0xa8a603b9  swl         $a2, 0x3B9($a1)
    ctx->pc = 0x265120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 953); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x265124: 0xb8a603b6  swr         $a2, 0x3B6($a1)
    ctx->pc = 0x265124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 950); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x265128: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x265128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_26512c:
    // 0x26512c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265130: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x265134: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x265138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26513c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26513cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265140: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x265140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x265144: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x265144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x265148: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x265148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x26514c: 0x8846000b  lwl         $a2, 0xB($v0)
    ctx->pc = 0x26514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x265150: 0x98460008  lwr         $a2, 0x8($v0)
    ctx->pc = 0x265150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x265154: 0xb0a403c1  sdl         $a0, 0x3C1($a1)
    ctx->pc = 0x265154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 961); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x265158: 0xb4a403ba  sdr         $a0, 0x3BA($a1)
    ctx->pc = 0x265158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26515c: 0xa8a603c5  swl         $a2, 0x3C5($a1)
    ctx->pc = 0x26515cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 965); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x265160: 0xb8a603c2  swr         $a2, 0x3C2($a1)
    ctx->pc = 0x265160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 962); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x265164: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265164u;
    {
        const bool branch_taken_0x265164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x265168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265164u;
        // 0x265168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265164) {
            ctx->pc = 0x265178u;
            goto label_265178;
        }
    }
    ctx->pc = 0x26516Cu;
    // 0x26516c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265170u;
    {
        const bool branch_taken_0x265170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265170u;
        // 0x265174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265170) {
            ctx->pc = 0x265190u;
            goto label_265190;
        }
    }
    ctx->pc = 0x265178u;
label_265178:
    // 0x265178: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x265178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26517c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26517cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x265180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265184: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x265184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x265188: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x265188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26518c: 0x8465003e  lh          $a1, 0x3E($v1)
    ctx->pc = 0x26518cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
label_265190:
    // 0x265190: 0xc0845a6  jal         func_211698
    ctx->pc = 0x265190u;
    SET_GPR_U32(ctx, 31, 0x265198u);
    ctx->pc = 0x211698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211698u, 0x265190u, 0x265198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265198u;
label_265198:
    // 0x265198: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26519c: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x26519cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
    // 0x2651a0: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x2651a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2651a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2651a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2651a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2651ac: 0xc0845a6  jal         func_211698
    ctx->pc = 0x2651ACu;
    SET_GPR_U32(ctx, 31, 0x2651B4u);
    ctx->pc = 0x2651B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651ACu;
    // 0x2651b0: 0x8445003e  lh          $a1, 0x3E($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211698u, 0x2651ACu, 0x2651B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651B4u;
label_2651b4:
    // 0x2651b4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2651b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2651b8: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x2651b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x2651bc: 0x8f91aa78  lw          $s1, -0x5588($gp)
    ctx->pc = 0x2651bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2651c0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2651C0u;
    SET_GPR_U32(ctx, 31, 0x2651C8u);
    ctx->pc = 0x2651C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651C0u;
    // 0x2651c4: 0x8630033e  lh          $s0, 0x33E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 830)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2651C0u, 0x2651C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651C8u;
label_2651c8:
    // 0x2651c8: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x2651c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x2651cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2651d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2651d4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2651d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2651d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2651d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2651dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2651dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2651e0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2651e4: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x2651e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2651e8: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x2651e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x2651ec: 0x260300ff  addiu       $v1, $s0, 0xFF
    ctx->pc = 0x2651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    // 0x2651f0: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x2651f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2651f4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2651f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2651f8: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x2651f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2651fc: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x2651fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x265200: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x265200u;
    SET_GPR_U32(ctx, 31, 0x265208u);
    ctx->pc = 0x265204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265200u;
    // 0x265204: 0xae30008c  sw          $s0, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x265200u, 0x265208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265208u;
label_265208:
    // 0x265208: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x26520c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x26520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x265210: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x265210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265218: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x265218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26521c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x265220: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265224: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x265224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26522c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x265230: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x265234: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x265234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x265238: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x265238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26523c: 0x2467f718  addiu       $a3, $v1, -0x8E8
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965016));
    // 0x265240: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x265240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x265244: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x265244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x265248: 0xacc20054  sw          $v0, 0x54($a2)
    ctx->pc = 0x265248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 2));
    // 0x26524c: 0x0  nop
    ctx->pc = 0x26524cu;
    // NOP
label_265250:
    // 0x265250: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x265250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x265254: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x265254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x265258: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26525c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26525cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265260: 0x28a300b4  slti        $v1, $a1, 0xB4
    ctx->pc = 0x265260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x265264: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x265268: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x265268u;
    {
        const bool branch_taken_0x265268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265268u;
        // 0x26526c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265268) {
            ctx->pc = 0x265250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265250;
        }
    }
    ctx->pc = 0x265270u;
    // 0x265270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265274: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x265274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_265278:
    // 0x265278: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26527c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26527cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265280: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x265284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265288: 0x28a40014  slti        $a0, $a1, 0x14
    ctx->pc = 0x265288u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x26528c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26528Cu;
    {
        const bool branch_taken_0x26528c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x265290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26528Cu;
        // 0x265290: 0xac66043c  sw          $a2, 0x43C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1084), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26528c) {
            ctx->pc = 0x265278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265278;
        }
    }
    ctx->pc = 0x265294u;
    // 0x265294: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x265294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x265298: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x265298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26529c: 0x1440fed4  bnez        $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x26529Cu;
    {
        const bool branch_taken_0x26529c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26529Cu;
        // 0x2652a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26529c) {
            ctx->pc = 0x264DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264df0;
        }
    }
    ctx->pc = 0x2652A4u;
    // 0x2652a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2652a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2652a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2652a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2652ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2652acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2652b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2652b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2652b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2652b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2652b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2652b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2652bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2652bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2652c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2652c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2652c4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2652c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2652c8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2652cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2652CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2652D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652CCu;
        // 0x2652d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2652CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2652D4u;
    // 0x2652d4: 0x0  nop
    ctx->pc = 0x2652d4u;
    // NOP
    ctx->pc = 0x2652d8u;
}
