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

// Function: sub_004E9E20
// Address: 0x4e9e20 - 0x4e9ed8
void sub_004E9E20_0x4e9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9E20_0x4e9e20");
#endif

    ctx->pc = 0x4e9e20u;

    // 0x4e9e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9e24: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e9e24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e9e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e9e2c: 0x252611e8  addiu       $a2, $t1, 0x11E8
    ctx->pc = 0x4e9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4584));
    // 0x4e9e30: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4e9e30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9e34: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4e9e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9e38: 0x85420016  lh          $v0, 0x16($t2)
    ctx->pc = 0x4e9e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 22)));
    // 0x4e9e3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e9e40: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4e9e44: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e9e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9e48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e9e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e9e4c: 0x8c68120c  lw          $t0, 0x120C($v1)
    ctx->pc = 0x4e9e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F120Cu));
    // 0x4e9e50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e9e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e9e54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e9e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e9e58: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e9e5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e9e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e9e60: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4e9e64: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4e9e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9e68: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4e9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4e9e6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9e6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e9e70: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e9e74: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4e9e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4e9e78: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e9e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e9e7c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4e9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4e9e80: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4e9e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9e84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E9E84u;
    {
        const bool branch_taken_0x4e9e84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E84u;
        // 0x4e9e88: 0x254b011c  addiu       $t3, $t2, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9e84) {
            ctx->pc = 0x4E9E98u;
            goto label_4e9e98;
        }
    }
    ctx->pc = 0x4E9E8Cu;
    // 0x4e9e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E9E8Cu;
    {
        const bool branch_taken_0x4e9e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E8Cu;
        // 0x4e9e90: 0x240204c2  addiu       $v0, $zero, 0x4C2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9e8c) {
            ctx->pc = 0x4E9E9Cu;
            goto label_4e9e9c;
        }
    }
    ctx->pc = 0x4E9E94u;
    // 0x4e9e94: 0x0  nop
    ctx->pc = 0x4e9e94u;
    // NOP
label_4e9e98:
    // 0x4e9e98: 0x240204c0  addiu       $v0, $zero, 0x4C0
    ctx->pc = 0x4e9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_4e9e9c:
    // 0x4e9e9c: 0xa542000c  sh          $v0, 0xC($t2)
    ctx->pc = 0x4e9e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e9ea0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e9ea4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9ea8: 0x8542015e  lh          $v0, 0x15E($t2)
    ctx->pc = 0x4e9ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 350)));
    // 0x4e9eac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9eb4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e9eb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9ebc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4e9ec0: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4e9ec0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e9ec4: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4e9ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e9ec8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4e9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e9ecc: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4e9eccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e9ed0: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4E9ED0u;
    ctx->pc = 0x4E9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9ED0u;
    // 0x4e9ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9ED8u;
}
