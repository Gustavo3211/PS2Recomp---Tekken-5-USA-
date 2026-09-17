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

// Function: sub_004C4CB8
// Address: 0x4c4cb8 - 0x4c5458
void sub_004C4CB8_0x4c4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4CB8_0x4c4cb8");
#endif

    switch (ctx->pc) {
        case 0x4c4cd4u: goto label_4c4cd4;
        case 0x4c4cf0u: goto label_4c4cf0;
        case 0x4c4d68u: goto label_4c4d68;
        case 0x4c4f50u: goto label_4c4f50;
        case 0x4c50ecu: goto label_4c50ec;
        case 0x4c51f8u: goto label_4c51f8;
        case 0x4c5250u: goto label_4c5250;
        case 0x4c5258u: goto label_4c5258;
        case 0x4c534cu: goto label_4c534c;
        case 0x4c53c4u: goto label_4c53c4;
        case 0x4c53ccu: goto label_4c53cc;
        case 0x4c53d4u: goto label_4c53d4;
        case 0x4c53dcu: goto label_4c53dc;
        case 0x4c53e4u: goto label_4c53e4;
        case 0x4c53f8u: goto label_4c53f8;
        case 0x4c542cu: goto label_4c542c;
        case 0x4c5434u: goto label_4c5434;
        case 0x4c543cu: goto label_4c543c;
        case 0x4c5444u: goto label_4c5444;
        default: break;
    }

    ctx->pc = 0x4c4cb8u;

    // 0x4c4cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c4cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c4cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c4ccc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C4CCCu;
    SET_GPR_U32(ctx, 31, 0x4C4CD4u);
    ctx->pc = 0x4C4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4CCCu;
    // 0x4c4cd0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C4CCCu, 0x4C4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4CD4u;
label_4c4cd4:
    // 0x4c4cd4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c4cd8: 0xac620f04  sw          $v0, 0xF04($v1)
    ctx->pc = 0x4c4cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F04u, _value); } while (0);
    // 0x4c4cdc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c4cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c4ce0: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4C4CE0u;
    {
        const bool branch_taken_0x4c4ce0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4CE0u;
        // 0x4c4ce4: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ce0) {
            ctx->pc = 0x4C4D1Cu;
            goto label_4c4d1c;
        }
    }
    ctx->pc = 0x4C4CE8u;
    // 0x4c4ce8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C4CE8u;
    SET_GPR_U32(ctx, 31, 0x4C4CF0u);
    ctx->pc = 0x4C4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4CE8u;
    // 0x4c4cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C4CE8u, 0x4C4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4CF0u;
label_4c4cf0:
    // 0x4c4cf0: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4c4cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c4cf4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4c4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c4cf8: 0x260401b6  addiu       $a0, $s0, 0x1B6
    ctx->pc = 0x4c4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x4c4cfc: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c4cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4d00: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c4d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c4d04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c4d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4c4d08: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c4d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4d0c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c4d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c4d10: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c4d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4c4d14: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4c4d14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4d18: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c4d18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4c4d1c:
    // 0x4c4d1c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4c4d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4c4d20: 0x25290eec  addiu       $t1, $t1, 0xEEC
    ctx->pc = 0x4c4d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3820));
    // 0x4c4d24: 0x254a0ef0  addiu       $t2, $t2, 0xEF0
    ctx->pc = 0x4c4d24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3824));
    // 0x4c4d28: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4c4d28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c4d2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4d30: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4c4d30u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c4d34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4d38: 0x346304a4  ori         $v1, $v1, 0x4A4
    ctx->pc = 0x4c4d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1188);
    // 0x4c4d3c: 0x344204a6  ori         $v0, $v0, 0x4A6
    ctx->pc = 0x4c4d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1190);
    // 0x4c4d40: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c4d40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c4d44: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c4d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c4d48: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c4d48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c4d4c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c4d4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c4d50: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4c4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4c4d54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4c4d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4d58: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c4d5c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4c4d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4d60: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4C4D60u;
    SET_GPR_U32(ctx, 31, 0x4C4D68u);
    ctx->pc = 0x4C4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4D60u;
    // 0x4c4d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4C4D60u, 0x4C4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4D68u;
label_4c4d68:
    // 0x4c4d68: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c4d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4c4d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4d70: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C4D70u;
    {
        const bool branch_taken_0x4c4d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D70u;
        // 0x4c4d74: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d70) {
            ctx->pc = 0x4C4DC0u;
            goto label_4c4dc0;
        }
    }
    ctx->pc = 0x4C4D78u;
    // 0x4c4d78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4D78u;
    {
        const bool branch_taken_0x4c4d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4d78) {
            ctx->pc = 0x4C4D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4D78u;
            // 0x4c4d7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4D90u;
            goto label_4c4d90;
        }
    }
    ctx->pc = 0x4C4D80u;
    // 0x4c4d80: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C4D80u;
    {
        const bool branch_taken_0x4c4d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4d80) {
            ctx->pc = 0x4C4D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4D80u;
            // 0x4c4d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4DA8u;
            goto label_4c4da8;
        }
    }
    ctx->pc = 0x4C4D88u;
    // 0x4c4d88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4C4D88u;
    {
        const bool branch_taken_0x4c4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D88u;
        // 0x4c4d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d88) {
            ctx->pc = 0x4C4E08u;
            goto label_4c4e08;
        }
    }
    ctx->pc = 0x4C4D90u;
label_4c4d90:
    // 0x4c4d90: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C4D90u;
    {
        const bool branch_taken_0x4c4d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D90u;
        // 0x4c4d94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d90) {
            ctx->pc = 0x4C4DD8u;
            goto label_4c4dd8;
        }
    }
    ctx->pc = 0x4C4D98u;
    // 0x4c4d98: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4C4D98u;
    {
        const bool branch_taken_0x4c4d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D98u;
        // 0x4c4d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d98) {
            ctx->pc = 0x4C4DF0u;
            goto label_4c4df0;
        }
    }
    ctx->pc = 0x4C4DA0u;
    // 0x4c4da0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4C4DA0u;
    {
        const bool branch_taken_0x4c4da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DA0u;
        // 0x4c4da4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4da0) {
            ctx->pc = 0x4C4E08u;
            goto label_4c4e08;
        }
    }
    ctx->pc = 0x4C4DA8u;
label_4c4da8:
    // 0x4c4da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4db4: 0x8131386  j           func_4C4E18
    ctx->pc = 0x4C4DB4u;
    ctx->pc = 0x4C4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4DB4u;
    // 0x4c4db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4E18u;
    goto label_4c4e18;
    ctx->pc = 0x4C4DBCu;
    // 0x4c4dbc: 0x0  nop
    ctx->pc = 0x4c4dbcu;
    // NOP
label_4c4dc0:
    // 0x4c4dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4dd0: 0x81313ec  j           func_4C4FB0
    ctx->pc = 0x4C4DD0u;
    ctx->pc = 0x4C4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4DD0u;
    // 0x4c4dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4FB0u;
    goto label_4c4fb0;
    ctx->pc = 0x4C4DD8u;
label_4c4dd8:
    // 0x4c4dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4de8: 0x813146c  j           func_4C51B0
    ctx->pc = 0x4C4DE8u;
    ctx->pc = 0x4C4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4DE8u;
    // 0x4c4dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C51B0u;
    goto label_4c51b0;
    ctx->pc = 0x4C4DF0u;
label_4c4df0:
    // 0x4c4df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4dfc: 0x81314ce  j           func_4C5338
    ctx->pc = 0x4C4DFCu;
    ctx->pc = 0x4C4E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4DFCu;
    // 0x4c4e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5338u;
    goto label_4c5338;
    ctx->pc = 0x4C4E04u;
    // 0x4c4e04: 0x0  nop
    ctx->pc = 0x4c4e04u;
    // NOP
label_4c4e08:
    // 0x4c4e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4e0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4e10: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E10u;
        // 0x4c4e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4E18u;
label_4c4e18:
    // 0x4c4e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c4e1c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c4e1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4e24: 0x25ad0eec  addiu       $t5, $t5, 0xEEC
    ctx->pc = 0x4c4e24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3820));
    // 0x4c4e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c4e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4e30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c4e34: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c4e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4e38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c4e3c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c4e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c4e44: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c4e44u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e48: 0x25ce0ef0  addiu       $t6, $t6, 0xEF0
    ctx->pc = 0x4c4e48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3824));
    // 0x4c4e4c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4c4e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e50: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x4c4e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4c4e54: 0x25ef0ef4  addiu       $t7, $t7, 0xEF4
    ctx->pc = 0x4c4e54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3828));
    // 0x4c4e58: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4c4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c4e5c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c4e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c4e64: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4c4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c4e68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4e6c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c4e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c4e70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c4e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c4e74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c4e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c4e78: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4c4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4c4e7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4e80: 0x258c0ee4  addiu       $t4, $t4, 0xEE4
    ctx->pc = 0x4c4e80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3812));
    // 0x4c4e84: 0x26720ee0  addiu       $s2, $s3, 0xEE0
    ctx->pc = 0x4c4e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3808));
    // 0x4c4e88: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c4e8c: 0x8c900f04  lw          $s0, 0xF04($a0)
    ctx->pc = 0x4c4e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3844)));
    // 0x4c4e90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4e94: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c4e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c4e98: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4c4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c4e9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4ea0: 0x85ab0000  lh          $t3, 0x0($t5)
    ctx->pc = 0x4c4ea0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c4ea4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c4ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c4ea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4eac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c4eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c4eb0: 0x348407d0  ori         $a0, $a0, 0x7D0
    ctx->pc = 0x4c4eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2000);
    // 0x4c4eb4: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4c4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4c4eb8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c4eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c4ebc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4c4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c4ec0: 0x85ca0000  lh          $t2, 0x0($t6)
    ctx->pc = 0x4c4ec0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4ec4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c4ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c4ec8: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4c4ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c4ecc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4eccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4ed0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c4ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c4ed4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c4ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c4ed8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c4ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c4edc: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4c4edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4c4ee0: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x4c4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x4c4ee4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4ee8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4c4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4eec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4ef0: 0x85e80000  lh          $t0, 0x0($t7)
    ctx->pc = 0x4c4ef0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c4ef4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c4ef8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4efc: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4c4efcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c4f00: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x4c4f00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x4c4f04: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4c4f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4c4f08: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4c4f08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4c4f0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4c4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4c4f10: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c4f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c4f14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4f18: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c4f18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c4f1c: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4c4f1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4c4f20: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4c4f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4c4f24: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4c4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4c4f28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4c4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4c4f2c: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4c4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4c4f30: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c4f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c4f34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4f38: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c4f38u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c4f3c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x4c4f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x4c4f40: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4c4f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4c4f44: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x4c4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x4c4f48: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C4F48u;
    SET_GPR_U32(ctx, 31, 0x4C4F50u);
    ctx->pc = 0x4C4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4F48u;
    // 0x4c4f4c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C4F48u, 0x4C4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4F50u;
label_4c4f50:
    // 0x4c4f50: 0x262501bc  addiu       $a1, $s1, 0x1BC
    ctx->pc = 0x4c4f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c4f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c4f58: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4F58u;
    {
        const bool branch_taken_0x4c4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F58u;
        // 0x4c4f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f58) {
            ctx->pc = 0x4C4F70u;
            goto label_4c4f70;
        }
    }
    ctx->pc = 0x4C4F60u;
    // 0x4c4f60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4F64u;
    {
        const bool branch_taken_0x4c4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F64u;
        // 0x4c4f68: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f64) {
            ctx->pc = 0x4C4F7Cu;
            goto label_4c4f7c;
        }
    }
    ctx->pc = 0x4C4F6Cu;
    // 0x4c4f6c: 0x0  nop
    ctx->pc = 0x4c4f6cu;
    // NOP
label_4c4f70:
    // 0x4c4f70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4f74: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c4f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c4f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c4f7c:
    // 0x4c4f7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c4f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4f84: 0x96630ee0  lhu         $v1, 0xEE0($s3)
    ctx->pc = 0x4c4f84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3808)));
    // 0x4c4f88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4f8c: 0xa6230162  sh          $v1, 0x162($s1)
    ctx->pc = 0x4c4f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c4f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4f94: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c4f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c4f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4fa0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c4fa4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c4fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4fa8: 0x81314ce  j           func_4C5338
    ctx->pc = 0x4C4FA8u;
    ctx->pc = 0x4C4FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4FA8u;
    // 0x4c4fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5338u;
    goto label_4c5338;
    ctx->pc = 0x4C4FB0u;
label_4c4fb0:
    // 0x4c4fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c4fb4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c4fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c4fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4fbc: 0x258c0eec  addiu       $t4, $t4, 0xEEC
    ctx->pc = 0x4c4fbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3820));
    // 0x4c4fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c4fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c4fcc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c4fccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4fd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c4fd4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c4fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c4fd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c4fdc: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c4fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c4fe0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4c4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4c4fe4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c4fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c4fe8: 0x25ad0ef0  addiu       $t5, $t5, 0xEF0
    ctx->pc = 0x4c4fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3824));
    // 0x4c4fec: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c4fecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c4ff0: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x4c4ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4c4ff4: 0x25ce0ef4  addiu       $t6, $t6, 0xEF4
    ctx->pc = 0x4c4ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3828));
    // 0x4c4ff8: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c4ffc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c5000: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c5000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c5004: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4c5004u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c5008: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c5008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c500c: 0x26900ee4  addiu       $s0, $s4, 0xEE4
    ctx->pc = 0x4c500cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3812));
    // 0x4c5010: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c5010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c5014: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5018: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c5018u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c501c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c501cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c5020: 0x26720ee0  addiu       $s2, $s3, 0xEE0
    ctx->pc = 0x4c5020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3808));
    // 0x4c5024: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c5028: 0x8c8f0f04  lw          $t7, 0xF04($a0)
    ctx->pc = 0x4c5028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3844)));
    // 0x4c502c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c502cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5030: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5034: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4c5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c5038: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c503c: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x4c503cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5040: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c5040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c5044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5048: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c5048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c504c: 0x348407d0  ori         $a0, $a0, 0x7D0
    ctx->pc = 0x4c504cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2000);
    // 0x4c5050: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c5050u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c5054: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5058: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4c5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c505c: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x4c505cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c5060: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c5060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5064: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4c5064u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5068: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c506c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c5070: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c5070u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c5074: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5078: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4c5078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4c507c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4c507cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4c5080: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5084: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4c5084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5088: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c508c: 0x85c80000  lh          $t0, 0x0($t6)
    ctx->pc = 0x4c508cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c5090: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5094: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5098: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4c5098u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c509c: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x4c509cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x4c50a0: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4c50a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4c50a4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c50a8: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4c50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x4c50ac: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c50acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c50b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c50b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c50b4: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c50b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c50b8: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4c50b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4c50bc: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4c50bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4c50c0: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c50c4: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4c50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4c50c8: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4c50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4c50cc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c50ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c50d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c50d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c50d4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c50d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c50d8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x4c50d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x4c50dc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4c50dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4c50e0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4c50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4c50e4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C50E4u;
    SET_GPR_U32(ctx, 31, 0x4C50ECu);
    ctx->pc = 0x4C50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C50E4u;
    // 0x4c50e8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C50E4u, 0x4C50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C50ECu;
label_4c50ec:
    // 0x4c50ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c50f0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C50F0u;
    {
        const bool branch_taken_0x4c50f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c50f0) {
            ctx->pc = 0x4C50F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C50F0u;
            // 0x4c50f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5108u;
            goto label_4c5108;
        }
    }
    ctx->pc = 0x4C50F8u;
    // 0x4c50f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4c50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c50fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C50FCu;
    {
        const bool branch_taken_0x4c50fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C50FCu;
        // 0x4c5100: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c50fc) {
            ctx->pc = 0x4C5110u;
            goto label_4c5110;
        }
    }
    ctx->pc = 0x4C5104u;
    // 0x4c5104: 0x0  nop
    ctx->pc = 0x4c5104u;
    // NOP
label_4c5108:
    // 0x4c5108: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c510c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c5110:
    // 0x4c5110: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c5110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c5114: 0x26850ee4  addiu       $a1, $s4, 0xEE4
    ctx->pc = 0x4c5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3812));
    // 0x4c5118: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c5118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c511c: 0x2407ff00  addiu       $a3, $zero, -0x100
    ctx->pc = 0x4c511cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c5120: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c5120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5124: 0x86230162  lh          $v1, 0x162($s1)
    ctx->pc = 0x4c5124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x4c5128: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c512c: 0x92640ee0  lbu         $a0, 0xEE0($s3)
    ctx->pc = 0x4c512cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3808)));
    // 0x4c5130: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c5130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4c5134: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c5134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c5138: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c5138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c513c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5140: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4c5140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5144: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x4c5144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x4c5148: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c5148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c514c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c514cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c5150: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x4c5150u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5154: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5154u;
    {
        const bool branch_taken_0x4c5154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5154) {
            ctx->pc = 0x4C5158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5154u;
            // 0x4c5158: 0x262301bc  addiu       $v1, $s1, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5180u;
            goto label_4c5180;
        }
    }
    ctx->pc = 0x4C515Cu;
    // 0x4c515c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5168: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c516c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c516cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5170: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c5170u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5174: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c5174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c5178: 0x81314ce  j           func_4C5338
    ctx->pc = 0x4C5178u;
    ctx->pc = 0x4C517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5178u;
    // 0x4c517c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5338u;
    goto label_4c5338;
    ctx->pc = 0x4C5180u;
label_4c5180:
    // 0x4c5180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c5180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5184: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c5184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c5188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c518c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c518cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5190: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c5194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c519c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c519cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c51a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c51a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c51a4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c51a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c51a8: 0x813146c  j           func_4C51B0
    ctx->pc = 0x4C51A8u;
    ctx->pc = 0x4C51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C51A8u;
    // 0x4c51ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C51B0u;
    goto label_4c51b0;
    ctx->pc = 0x4C51B0u;
label_4c51b0:
    // 0x4c51b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c51b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c51b8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c51b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c51bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c51c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c51c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c51c8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c51c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c51cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c51ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c51d0: 0x26830ee0  addiu       $v1, $s4, 0xEE0
    ctx->pc = 0x4c51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3808));
    // 0x4c51d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c51d8: 0x36100007  ori         $s0, $s0, 0x7
    ctx->pc = 0x4c51d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7);
    // 0x4c51dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4c51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4c51e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0EE0u));
    // 0x4c51e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c51e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c51e8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c51e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c51ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4c51f0: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C51F0u;
    SET_GPR_U32(ctx, 31, 0x4C51F8u);
    ctx->pc = 0x4C51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C51F0u;
    // 0x4c51f4: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C51F0u, 0x4C51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C51F8u;
label_4c51f8:
    // 0x4c51f8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4C51F8u;
    {
        const bool branch_taken_0x4c51f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c51f8) {
            ctx->pc = 0x4C51FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C51F8u;
            // 0x4c51fc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5228u;
            goto label_4c5228;
        }
    }
    ctx->pc = 0x4C5200u;
    // 0x4c5200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c520c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c520cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5210: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5214: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c5214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5218: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c5218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c521c: 0x81314ce  j           func_4C5338
    ctx->pc = 0x4C521Cu;
    ctx->pc = 0x4C5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C521Cu;
    // 0x4c5220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5338u;
    goto label_4c5338;
    ctx->pc = 0x4C5224u;
    // 0x4c5224: 0x0  nop
    ctx->pc = 0x4c5224u;
    // NOP
label_4c5228:
    // 0x4c5228: 0x24440ef8  addiu       $a0, $v0, 0xEF8
    ctx->pc = 0x4c5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3832));
    // 0x4c522c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c5230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5234: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4c5234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4c5238: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c5238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c523c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c523cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c5240: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C5240u;
    {
        const bool branch_taken_0x4c5240 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5240u;
        // 0x4c5244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5240) {
            ctx->pc = 0x4C5290u;
            goto label_4c5290;
        }
    }
    ctx->pc = 0x4C5248u;
    // 0x4c5248: 0x2413003d  addiu       $s3, $zero, 0x3D
    ctx->pc = 0x4c5248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x4c524c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c524cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_4c5250:
    // 0x4c5250: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4C5250u;
    SET_GPR_U32(ctx, 31, 0x4C5258u);
    ctx->pc = 0x4C5254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5250u;
    // 0x4c5254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4C5250u, 0x4C5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5258u;
label_4c5258:
    // 0x4c5258: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x4c5258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4c525c: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4c525cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4c5260: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c5260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5264: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4c5264u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5268: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c5268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c526c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5270: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c5270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4c5274: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c527c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5280: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c5280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c5284: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c5284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5288: 0x441fff1  bgez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4C5288u;
    {
        const bool branch_taken_0x4c5288 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c5288) {
            ctx->pc = 0x4C5250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5250;
        }
    }
    ctx->pc = 0x4C5290u;
label_4c5290:
    // 0x4c5290: 0x26850ee0  addiu       $a1, $s4, 0xEE0
    ctx->pc = 0x4c5290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3808));
    // 0x4c5294: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c5294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5298: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c5298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c529c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c529cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c52a0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4c52a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4c52a4: 0x24670ee4  addiu       $a3, $v1, 0xEE4
    ctx->pc = 0x4c52a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3812));
    // 0x4c52a8: 0x3488ffff  ori         $t0, $a0, 0xFFFF
    ctx->pc = 0x4c52a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c52ac: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c52acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0EE4u));
    // 0x4c52b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x4c52b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c52b4: 0x26290148  addiu       $t1, $s1, 0x148
    ctx->pc = 0x4c52b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x4c52b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c52bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4c52bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4c52c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c52c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c52c4: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4c52c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c52c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c52c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c52cc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c52ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c52d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4c52d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c52d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4c52d8: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x4c52d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c52dc: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x4c52dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c52e0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C52E0u;
    {
        const bool branch_taken_0x4c52e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c52e0) {
            ctx->pc = 0x4C52E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C52E0u;
            // 0x4c52e4: 0xa5260000  sh          $a2, 0x0($t1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5300u;
            goto label_4c5300;
        }
    }
    ctx->pc = 0x4C52E8u;
    // 0x4c52e8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4c52e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4c52ec: 0x31030006  andi        $v1, $t0, 0x6
    ctx->pc = 0x4c52ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)6);
    // 0x4c52f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c52f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c52f4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4c52f8: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x4c52f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c52fc: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x4c52fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_4c5300:
    // 0x4c5300: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4c5300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c5304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c5304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c530c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c530cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c5310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5318: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c5318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c531c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c531cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c5320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5324: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c5324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c5328: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c5328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c532c: 0x81314ce  j           func_4C5338
    ctx->pc = 0x4C532Cu;
    ctx->pc = 0x4C5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C532Cu;
    // 0x4c5330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5338u;
    goto label_4c5338;
    ctx->pc = 0x4C5334u;
    // 0x4c5334: 0x0  nop
    ctx->pc = 0x4c5334u;
    // NOP
label_4c5338:
    // 0x4c5338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c533c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c5340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c5344: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C5344u;
    SET_GPR_U32(ctx, 31, 0x4C534Cu);
    ctx->pc = 0x4C5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5344u;
    // 0x4c5348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C5344u, 0x4C534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C534Cu;
label_4c534c:
    // 0x4c534c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c534cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c5350: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c5350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c5354: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c5354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c5358: 0x248a0ef0  addiu       $t2, $a0, 0xEF0
    ctx->pc = 0x4c5358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 3824));
    // 0x4c535c: 0x24ab0ef4  addiu       $t3, $a1, 0xEF4
    ctx->pc = 0x4c535cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3828));
    // 0x4c5360: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c5360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5364: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c5364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5368: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c5368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c536c: 0x24690eec  addiu       $t1, $v1, 0xEEC
    ctx->pc = 0x4c536cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3820));
    // 0x4c5370: 0x34840030  ori         $a0, $a0, 0x30
    ctx->pc = 0x4c5370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
    // 0x4c5374: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x4c5374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x4c5378: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x4c5378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x4c537c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4C537Cu;
    {
        const bool branch_taken_0x4c537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C537Cu;
        // 0x4c5380: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c537c) {
            ctx->pc = 0x4C5444u;
            goto label_4c5444;
        }
    }
    ctx->pc = 0x4C5384u;
    // 0x4c5384: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5388: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c5388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c538c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4c538cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c5394: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5398: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c5398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c539c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c539cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c53a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c53a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c53a4: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4c53a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4c53a8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c53ac: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c53acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c53b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4c53b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53b4: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4c53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4c53b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53bc: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4C53BCu;
    SET_GPR_U32(ctx, 31, 0x4C53C4u);
    ctx->pc = 0x4C53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C53BCu;
    // 0x4c53c0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4C53BCu, 0x4C53C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53C4u;
label_4c53c4:
    // 0x4c53c4: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C53C4u;
    SET_GPR_U32(ctx, 31, 0x4C53CCu);
    ctx->pc = 0x4C53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C53C4u;
    // 0x4c53c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C53C4u, 0x4C53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53CCu;
label_4c53cc:
    // 0x4c53cc: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C53CCu;
    SET_GPR_U32(ctx, 31, 0x4C53D4u);
    ctx->pc = 0x4C53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C53CCu;
    // 0x4c53d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C53CCu, 0x4C53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53D4u;
label_4c53d4:
    // 0x4c53d4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C53D4u;
    SET_GPR_U32(ctx, 31, 0x4C53DCu);
    ctx->pc = 0x4C53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C53D4u;
    // 0x4c53d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C53D4u, 0x4C53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53DCu;
label_4c53dc:
    // 0x4c53dc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C53DCu;
    SET_GPR_U32(ctx, 31, 0x4C53E4u);
    ctx->pc = 0x4C53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C53DCu;
    // 0x4c53e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C53DCu, 0x4C53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53E4u;
label_4c53e4:
    // 0x4c53e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c53e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C53E8u;
    {
        const bool branch_taken_0x4c53e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C53E8u;
        // 0x4c53ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c53e8) {
            ctx->pc = 0x4C5444u;
            goto label_4c5444;
        }
    }
    ctx->pc = 0x4C53F0u;
    // 0x4c53f0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C53F0u;
    SET_GPR_U32(ctx, 31, 0x4C53F8u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C53F0u, 0x4C53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C53F8u;
label_4c53f8:
    // 0x4c53f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c53fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4c53fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5400: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c5400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c5404: 0x2445d680  addiu       $a1, $v0, -0x2980
    ctx->pc = 0x4c5404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4c5408: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4C5408u;
    {
        const bool branch_taken_0x4c5408 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5408u;
        // 0x4c540c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5408) {
            ctx->pc = 0x4C5444u;
            goto label_4c5444;
        }
    }
    ctx->pc = 0x4C5410u;
    // 0x4c5410: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c5410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c5414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c5414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5418: 0xa606015e  sh          $a2, 0x15E($s0)
    ctx->pc = 0x4c5418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c541c: 0xa4a223c4  sh          $v0, 0x23C4($a1)
    ctx->pc = 0x4c541cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5420: 0xa4a3232e  sh          $v1, 0x232E($a1)
    ctx->pc = 0x4c5420u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5424: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C5424u;
    SET_GPR_U32(ctx, 31, 0x4C542Cu);
    ctx->pc = 0x4C5428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5424u;
    // 0x4c5428: 0xa4a0232c  sh          $zero, 0x232C($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C5424u, 0x4C542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C542Cu;
label_4c542c:
    // 0x4c542c: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C542Cu;
    SET_GPR_U32(ctx, 31, 0x4C5434u);
    ctx->pc = 0x4C5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C542Cu;
    // 0x4c5430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C542Cu, 0x4C5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5434u;
label_4c5434:
    // 0x4c5434: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C5434u;
    SET_GPR_U32(ctx, 31, 0x4C543Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C5434u, 0x4C543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C543Cu;
label_4c543c:
    // 0x4c543c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C543Cu;
    SET_GPR_U32(ctx, 31, 0x4C5444u);
    ctx->pc = 0x4C5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C543Cu;
    // 0x4c5440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C543Cu, 0x4C5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5444u;
label_4c5444:
    // 0x4c5444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c5448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c544c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C544Cu;
        // 0x4c5450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5454u;
    // 0x4c5454: 0x0  nop
    ctx->pc = 0x4c5454u;
    // NOP
    ctx->pc = 0x4c5458u;
}
