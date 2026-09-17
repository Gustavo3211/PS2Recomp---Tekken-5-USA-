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

// Function: sub_004F7C98
// Address: 0x4f7c98 - 0x4f8240
void sub_004F7C98_0x4f7c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7C98_0x4f7c98");
#endif

    switch (ctx->pc) {
        case 0x4f7cc4u: goto label_4f7cc4;
        case 0x4f7dc0u: goto label_4f7dc0;
        case 0x4f7df0u: goto label_4f7df0;
        case 0x4f7e50u: goto label_4f7e50;
        case 0x4f7f00u: goto label_4f7f00;
        case 0x4f7f28u: goto label_4f7f28;
        case 0x4f7f30u: goto label_4f7f30;
        case 0x4f7fe0u: goto label_4f7fe0;
        case 0x4f7fe8u: goto label_4f7fe8;
        case 0x4f80a4u: goto label_4f80a4;
        case 0x4f80acu: goto label_4f80ac;
        case 0x4f8158u: goto label_4f8158;
        case 0x4f8184u: goto label_4f8184;
        case 0x4f820cu: goto label_4f820c;
        default: break;
    }

    ctx->pc = 0x4f7c98u;

    // 0x4f7c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f7c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f7c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f7ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f7ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7ca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f7ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f7ca8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f7cac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f7cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f7cb0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f7cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f7cb4: 0x442002d  bltzl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4F7CB4u;
    {
        const bool branch_taken_0x4f7cb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f7cb4) {
            ctx->pc = 0x4F7CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F7CB4u;
            // 0x4f7cb8: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7D6Cu;
            goto label_4f7d6c;
        }
    }
    ctx->pc = 0x4F7CBCu;
    // 0x4f7cbc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F7CBCu;
    SET_GPR_U32(ctx, 31, 0x4F7CC4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F7CBCu, 0x4F7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7CC4u;
label_4f7cc4:
    // 0x4f7cc4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f7cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f7cc8: 0x960201be  lhu         $v0, 0x1BE($s0)
    ctx->pc = 0x4f7cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f7ccc: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x4f7cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f7cd0: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4f7cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f7cd4: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f7cd8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4f7cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7cdc: 0x2608012c  addiu       $t0, $s0, 0x12C
    ctx->pc = 0x4f7cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f7ce0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f7ce4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f7ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7ce8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f7cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7cf4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f7cf8: 0x96040162  lhu         $a0, 0x162($s0)
    ctx->pc = 0x4f7cf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f7cfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f7d00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7d04: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f7d08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f7d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f7d0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f7d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f7d10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f7d14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7d18: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f7d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f7d1c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f7d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f7d20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7d24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f7d28: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f7d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f7d2c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f7d30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7d38: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f7d3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7d40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f7d44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7d48: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f7d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f7d4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f7d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f7d50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7d54: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f7d58: 0xa609002e  sh          $t1, 0x2E($s0)
    ctx->pc = 0x4f7d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f7d5c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f7d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f7d60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f7d64: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f7d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7d68: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f7d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f7d6c:
    // 0x4f7d6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7D6Cu;
    {
        const bool branch_taken_0x4f7d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7D6Cu;
        // 0x4f7d70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d6c) {
            ctx->pc = 0x4F7D90u;
            goto label_4f7d90;
        }
    }
    ctx->pc = 0x4F7D74u;
    // 0x4f7d74: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F7D74u;
    {
        const bool branch_taken_0x4f7d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7D74u;
        // 0x4f7d78: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d74) {
            ctx->pc = 0x4F7DA8u;
            goto label_4f7da8;
        }
    }
    ctx->pc = 0x4F7D7Cu;
    // 0x4f7d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f7d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7d84: 0x3e00008  jr          $ra
    ctx->pc = 0x4F7D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7D84u;
        // 0x4f7d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F7D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F7D8Cu;
    // 0x4f7d8c: 0x0  nop
    ctx->pc = 0x4f7d8cu;
    // NOP
label_4f7d90:
    // 0x4f7d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f7d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7d9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f7d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7da0: 0x813de1e  j           func_4F7878
    ctx->pc = 0x4F7DA0u;
    ctx->pc = 0x4F7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7DA0u;
    // 0x4f7da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F7878u, 0x4F7DA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F7DA8u;
label_4f7da8:
    // 0x4f7da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f7db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7db4: 0x813ddf8  j           func_4F77E0
    ctx->pc = 0x4F7DB4u;
    ctx->pc = 0x4F7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7DB4u;
    // 0x4f7db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F77E0u;
    sub_004F77E0_0x4f77e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F7DBCu;
    // 0x4f7dbc: 0x0  nop
    ctx->pc = 0x4f7dbcu;
    // NOP
label_4f7dc0:
    // 0x4f7dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f7dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f7dc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f7dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f7dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f7dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f7dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f7dd8: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4f7dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4f7ddc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f7de0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f7de4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4f7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4f7de8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F7DE8u;
    SET_GPR_U32(ctx, 31, 0x4F7DF0u);
    ctx->pc = 0x4F7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7DE8u;
    // 0x4f7dec: 0x26340018  addiu       $s4, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F7DE8u, 0x4F7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7DF0u;
label_4f7df0:
    // 0x4f7df0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4f7df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7df4: 0x86220016  lh          $v0, 0x16($s1)
    ctx->pc = 0x4f7df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x4f7df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f7df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7dfc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f7dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f7e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f7e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7e04: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7E04u;
    {
        const bool branch_taken_0x4f7e04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4F7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7E04u;
        // 0x4f7e08: 0x26270118  addiu       $a3, $s1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7e04) {
            ctx->pc = 0x4F7E30u;
            goto label_4f7e30;
        }
    }
    ctx->pc = 0x4F7E0Cu;
    // 0x4f7e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f7e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7e14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f7e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7e18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f7e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f7e1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f7e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7e20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f7e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f7e24: 0x813d9ea  j           func_4F67A8
    ctx->pc = 0x4F7E24u;
    ctx->pc = 0x4F7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7E24u;
    // 0x4f7e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F67A8u, 0x4F7E24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F7E2Cu;
    // 0x4f7e2c: 0x0  nop
    ctx->pc = 0x4f7e2cu;
    // NOP
label_4f7e30:
    // 0x4f7e30: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f7e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f7e34: 0x86230136  lh          $v1, 0x136($s1)
    ctx->pc = 0x4f7e34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
    // 0x4f7e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f7e3c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x4f7e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f7e40: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x4f7e40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f7e44: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4f7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f7e48: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7E48u;
    SET_GPR_U32(ctx, 31, 0x4F7E50u);
    ctx->pc = 0x4F7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7E48u;
    // 0x4f7e4c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7E48u, 0x4F7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7E50u;
label_4f7e50:
    // 0x4f7e50: 0x26270128  addiu       $a3, $s1, 0x128
    ctx->pc = 0x4f7e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f7e54: 0x962601b6  lhu         $a2, 0x1B6($s1)
    ctx->pc = 0x4f7e54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4f7e58: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x4f7e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f7e5c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f7e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f7e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7e64: 0x30c60006  andi        $a2, $a2, 0x6
    ctx->pc = 0x4f7e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
    // 0x4f7e68: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x4f7e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7e6c: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x4F7E6Cu;
    {
        const bool branch_taken_0x4f7e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7E6Cu;
        // 0x4f7e70: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7e6c) {
            ctx->pc = 0x4F7ED0u;
            goto label_4f7ed0;
        }
    }
    ctx->pc = 0x4F7E74u;
    // 0x4f7e74: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x4f7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x4f7e78: 0x86230130  lh          $v1, 0x130($s1)
    ctx->pc = 0x4f7e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4f7e7c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f7e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f7e80: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f7e84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7e88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f7e8c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f7e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f7e90: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x4f7e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f7e94: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4f7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f7e98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7e9c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7ea0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4f7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4f7ea4: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x4f7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4f7ea8: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4f7ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4f7eac: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4f7eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4f7eb0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4f7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f7eb4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7eb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f7ebc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f7ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f7ec0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7ec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7ec8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7ecc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4f7eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_4f7ed0:
    // 0x4f7ed0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f7ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f7ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7edc: 0x244294f6  addiu       $v0, $v0, -0x6B0A
    ctx->pc = 0x4f7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939894));
    // 0x4f7ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f7ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f7ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f7ee8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f7ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7eec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f7eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f7ef0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f7ef4: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F7EF4u;
    ctx->pc = 0x4F7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7EF4u;
    // 0x4f7ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F7EFCu;
    // 0x4f7efc: 0x0  nop
    ctx->pc = 0x4f7efcu;
    // NOP
label_4f7f00:
    // 0x4f7f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f7f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f7f08: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f7f08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f7f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f7f10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f7f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f7f18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f7f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f7f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f7f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f7f20: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7F20u;
    SET_GPR_U32(ctx, 31, 0x4F7F28u);
    ctx->pc = 0x4F7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7F20u;
    // 0x4f7f24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7F20u, 0x4F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7F28u;
label_4f7f28:
    // 0x4f7f28: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7F28u;
    SET_GPR_U32(ctx, 31, 0x4F7F30u);
    ctx->pc = 0x4F7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7F28u;
    // 0x4f7f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7F28u, 0x4F7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7F30u;
label_4f7f30:
    // 0x4f7f30: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f7f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f7f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f7f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7f38: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x4f7f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f7f3c: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f7f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7f40: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7f44: 0xa6320024  sh          $s2, 0x24($s1)
    ctx->pc = 0x4f7f44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f7f48: 0x123c02  srl         $a3, $s2, 16
    ctx->pc = 0x4f7f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f7f4c: 0x32458000  andi        $a1, $s2, 0x8000
    ctx->pc = 0x4f7f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f7f50: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4f7f50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f7f54: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4f7f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f7f58: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7f5c: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f7f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7f60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7f64: 0x65980b  movn        $s3, $v1, $a1
    ctx->pc = 0x4f7f64u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x4f7f68: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f7f6c: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f7f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f7f70: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7f74: 0xa6270022  sh          $a3, 0x22($s1)
    ctx->pc = 0x4f7f74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f7f78: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f7f78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f7f7c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f7f7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f7f80: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f7f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f7f84: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f7f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7f88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7f8c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f7f90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7f94: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7f98: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f7f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f7f9c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7f9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7fa0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f7fa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f7fa4: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7fa8: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f7fa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7fac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7facu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7fb0: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f7fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f7fb4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f7fb8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7fbc: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f7fbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f7fc0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7fc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7fc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f7fcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7fd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f7fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f7fd4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f7fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f7fd8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7FD8u;
    SET_GPR_U32(ctx, 31, 0x4F7FE0u);
    ctx->pc = 0x4F7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7FD8u;
    // 0x4f7fdc: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7FD8u, 0x4F7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7FE0u;
label_4f7fe0:
    // 0x4f7fe0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7FE0u;
    SET_GPR_U32(ctx, 31, 0x4F7FE8u);
    ctx->pc = 0x4F7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7FE0u;
    // 0x4f7fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7FE0u, 0x4F7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7FE8u;
label_4f7fe8:
    // 0x4f7fe8: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4f7fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7fec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f7fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7ff0: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f7ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f7ff4: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x4f7ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f7ff8: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f7ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7ffc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8000: 0xa6320028  sh          $s2, 0x28($s1)
    ctx->pc = 0x4f8000u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f8004: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f8004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f8008: 0x32468000  andi        $a2, $s2, 0x8000
    ctx->pc = 0x4f8008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f800c: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f800cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f8010: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4f8010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8014: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f8014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8018: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f8018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f801c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f801cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8020: 0x86980a  movz        $s3, $a0, $a2
    ctx->pc = 0x4f8020u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f8024: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f8028: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f8028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f802c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f802cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8030: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4f8030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f8034: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f8034u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f8038: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f8038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f803c: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f8040: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f8040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8044: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8048: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f8048u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f804c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f804cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8050: 0x26280128  addiu       $t0, $s1, 0x128
    ctx->pc = 0x4f8050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f8054: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8058: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f805c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f805cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f8060: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f8060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8064: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f8064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8068: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f8068u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f806c: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f806cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f8070: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f8070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f8074: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8074u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f8078: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f807c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f807cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f8080: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f8080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f8084: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f8084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8088: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f808c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f8090: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f8090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f8094: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f8094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f8098: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f8098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f809c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F809Cu;
    SET_GPR_U32(ctx, 31, 0x4F80A4u);
    ctx->pc = 0x4F80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F809Cu;
    // 0x4f80a0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F809Cu, 0x4F80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F80A4u;
label_4f80a4:
    // 0x4f80a4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F80A4u;
    SET_GPR_U32(ctx, 31, 0x4F80ACu);
    ctx->pc = 0x4F80A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F80A4u;
    // 0x4f80a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F80A4u, 0x4F80ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F80ACu;
label_4f80ac:
    // 0x4f80ac: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4f80acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f80b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f80b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f80b4: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f80b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f80b8: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x4f80b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f80bc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f80bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f80c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f80c4: 0x32458000  andi        $a1, $s2, 0x8000
    ctx->pc = 0x4f80c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f80c8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f80c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f80cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4f80ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f80d0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f80d4: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f80d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f80d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f80d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f80dc: 0x85980a  movz        $s3, $a0, $a1
    ctx->pc = 0x4f80dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f80e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f80e4: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x4f80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f80e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f80ec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f80ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f80f0: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f80f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f80f4: 0x2627012c  addiu       $a3, $s1, 0x12C
    ctx->pc = 0x4f80f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f80f8: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f80f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f80fc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f80fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8100: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8104: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4f8104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f8108: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f810c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8110: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f8110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f8114: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f8114u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f8118: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8118u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f811c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8120: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f8120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8124: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8128: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f8128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f812c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f8130: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8134: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f8134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f8138: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f8138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f813c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f813cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8140: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4f8140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f8144: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f8144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f8148: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f8148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f814c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f814cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f8150: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8150u;
    SET_GPR_U32(ctx, 31, 0x4F8158u);
    ctx->pc = 0x4F8154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8150u;
    // 0x4f8154: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8150u, 0x4F8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8158u;
label_4f8158:
    // 0x4f8158: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f8158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f815c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8160: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f8160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f8164: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4f8164u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f8168: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f816c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x4f816cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f8170: 0x2673002d  addiu       $s3, $s3, 0x2D
    ctx->pc = 0x4f8170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
    // 0x4f8174: 0xa633015e  sh          $s3, 0x15E($s1)
    ctx->pc = 0x4f8174u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f8178: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f8178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f817c: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F817Cu;
    SET_GPR_U32(ctx, 31, 0x4F8184u);
    ctx->pc = 0x4F8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F817Cu;
    // 0x4f8180: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F817Cu, 0x4F8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8184u;
label_4f8184:
    // 0x4f8184: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f8184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8188: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f818c: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4f818cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f8190: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f8190u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8194: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f8194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f8198: 0x324201ff  andi        $v0, $s2, 0x1FF
    ctx->pc = 0x4f8198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    // 0x4f819c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f819cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f81a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f81a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f81a4: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f81a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f81a8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f81a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f81ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f81acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f81b0: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f81b4: 0xc4980a  movz        $s3, $a2, $a0
    ctx->pc = 0x4f81b4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f81b8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f81b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f81bc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f81bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f81c0: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f81c4: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f81c8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f81c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f81cc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f81ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f81d0: 0xc39024  and         $s2, $a2, $v1
    ctx->pc = 0x4f81d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f81d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f81d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f81d8: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f81d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f81dc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f81dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f81e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f81e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f81e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f81e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f81e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f81ec: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f81ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f81f0: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f81f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f81f4: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4f81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f81f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f81f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f81fc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f8200: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f8200u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8204: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F8204u;
    SET_GPR_U32(ctx, 31, 0x4F820Cu);
    ctx->pc = 0x4F8208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8204u;
    // 0x4f8208: 0xa6320136  sh          $s2, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F8204u, 0x4F820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F820Cu;
label_4f820c:
    // 0x4f820c: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f8210: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f8210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f8214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f8214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f821c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f821cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f8220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8224: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f8228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f8228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f822c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f822cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f8230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8234: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f8234u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8238: 0x813df70  j           func_4F7DC0
    ctx->pc = 0x4F8238u;
    ctx->pc = 0x4F823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8238u;
    // 0x4f823c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7DC0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f7dc0;
    ctx->pc = 0x4F8240u;
}
