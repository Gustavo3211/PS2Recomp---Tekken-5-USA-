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

// Function: sub_00208D68
// Address: 0x208d68 - 0x208fc0
void sub_00208D68_0x208d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208D68_0x208d68");
#endif

    switch (ctx->pc) {
        case 0x208dd8u: goto label_208dd8;
        case 0x208e68u: goto label_208e68;
        case 0x208ec4u: goto label_208ec4;
        case 0x208f48u: goto label_208f48;
        case 0x208f98u: goto label_208f98;
        default: break;
    }

    ctx->pc = 0x208d68u;

    // 0x208d68: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x208d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x208d6c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x208d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x208d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x208d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x208d7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x208d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x208d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208d84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x208d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208d8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x208d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x208d90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x208d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x208d94: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x208D94u;
    {
        const bool branch_taken_0x208d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D94u;
        // 0x208d98: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d94) {
            ctx->pc = 0x208ED0u;
            goto label_208ed0;
        }
    }
    ctx->pc = 0x208D9Cu;
    // 0x208d9c: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x208da0: 0x26a28858  addiu       $v0, $s5, -0x77A8
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x208da4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x208da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A889Cu));
    // 0x208da8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x208da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x208dac: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x208dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A889Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A889Cu, _value); } while (0);
    // 0x208db0: 0x86440090  lh          $a0, 0x90($s2)
    ctx->pc = 0x208db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x208db4: 0x86630090  lh          $v1, 0x90($s3)
    ctx->pc = 0x208db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x208db8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x208db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x208dbc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208DBCu;
    {
        const bool branch_taken_0x208dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DBCu;
        // 0x208dc0: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dbc) {
            ctx->pc = 0x208DE0u;
            goto label_208de0;
        }
    }
    ctx->pc = 0x208DC4u;
    // 0x208dc4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x208dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208dc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208DC8u;
    {
        const bool branch_taken_0x208dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DC8u;
        // 0x208dcc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dc8) {
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208DD0u;
    // 0x208dd0: 0xc0822e6  jal         func_208B98
    ctx->pc = 0x208DD0u;
    SET_GPR_U32(ctx, 31, 0x208DD8u);
    ctx->pc = 0x208B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B98u, 0x208DD0u, 0x208DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DD8u;
label_208dd8:
    // 0x208dd8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x208DD8u;
    {
        const bool branch_taken_0x208dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208dd8) {
            ctx->pc = 0x208DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208DD8u;
            // 0x208ddc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208DF4u;
            goto label_208df4;
        }
    }
    ctx->pc = 0x208DE0u;
label_208de0:
    // 0x208de0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x208de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208DE4u;
    {
        const bool branch_taken_0x208de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de4) {
            ctx->pc = 0x208DF4u;
            goto label_208df4;
        }
    }
    ctx->pc = 0x208DECu;
    // 0x208dec: 0x0  nop
    ctx->pc = 0x208decu;
    // NOP
label_208df0:
    // 0x208df0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x208df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208df4:
    // 0x208df4: 0x96230090  lhu         $v1, 0x90($s1)
    ctx->pc = 0x208df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x208df8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208dfc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x208e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x208e04: 0xa6230090  sh          $v1, 0x90($s1)
    ctx->pc = 0x208e04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x208e08: 0x96020090  lhu         $v0, 0x90($s0)
    ctx->pc = 0x208e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x208e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208e10: 0xa6020090  sh          $v0, 0x90($s0)
    ctx->pc = 0x208e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x208e14: 0xa6240092  sh          $a0, 0x92($s1)
    ctx->pc = 0x208e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 4));
    // 0x208e18: 0xa6040092  sh          $a0, 0x92($s0)
    ctx->pc = 0x208e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 4));
    // 0x208e1c: 0x90a283c8  lbu         $v0, -0x7C38($a1)
    ctx->pc = 0x208e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3A83C8u));
    // 0x208e20: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x208E20u;
    {
        const bool branch_taken_0x208e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E20u;
        // 0x208e24: 0x26838858  addiu       $v1, $s4, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e20) {
            ctx->pc = 0x208E78u;
            goto label_208e78;
        }
    }
    ctx->pc = 0x208E28u;
    // 0x208e28: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x208e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x208e2c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x208e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x208e30: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208e34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208E34u;
    {
        const bool branch_taken_0x208e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E34u;
        // 0x208e38: 0x96250090  lhu         $a1, 0x90($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e34) {
            ctx->pc = 0x208E54u;
            goto label_208e54;
        }
    }
    ctx->pc = 0x208E3Cu;
    // 0x208e3c: 0x86020090  lh          $v0, 0x90($s0)
    ctx->pc = 0x208e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x208e40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208e44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208E44u;
    {
        const bool branch_taken_0x208e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e44) {
            ctx->pc = 0x208E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E44u;
            // 0x208e48: 0x52c00  sll         $a1, $a1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E58u;
            goto label_208e58;
        }
    }
    ctx->pc = 0x208E4Cu;
    // 0x208e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208e50: 0xa6220092  sh          $v0, 0x92($s1)
    ctx->pc = 0x208e50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 2));
label_208e54:
    // 0x208e54: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x208e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_208e58:
    // 0x208e58: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x208e5c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x208e60: 0xc0a3ad4  jal         func_28EB50
    ctx->pc = 0x208E60u;
    SET_GPR_U32(ctx, 31, 0x208E68u);
    ctx->pc = 0x208E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E60u;
    // 0x208e64: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB50u, 0x208E60u, 0x208E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E68u;
label_208e68:
    // 0x208e68: 0x86050090  lh          $a1, 0x90($s0)
    ctx->pc = 0x208e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x208e6c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x208E6Cu;
    {
        const bool branch_taken_0x208e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E6Cu;
        // 0x208e70: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e6c) {
            ctx->pc = 0x208F40u;
            goto label_208f40;
        }
    }
    ctx->pc = 0x208E74u;
    // 0x208e74: 0x0  nop
    ctx->pc = 0x208e74u;
    // NOP
label_208e78:
    // 0x208e78: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x208e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x208e7c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x208e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x208e80: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208e84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208E84u;
    {
        const bool branch_taken_0x208e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e84) {
            ctx->pc = 0x208E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E84u;
            // 0x208e88: 0x86050090  lh          $a1, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E9Cu;
            goto label_208e9c;
        }
    }
    ctx->pc = 0x208E8Cu;
    // 0x208e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208e90: 0xa6220092  sh          $v0, 0x92($s1)
    ctx->pc = 0x208e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x208e94: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x208e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x208e98: 0x86050090  lh          $a1, 0x90($s0)
    ctx->pc = 0x208e98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_208e9c:
    // 0x208e9c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x208e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208ea0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208EA0u;
    {
        const bool branch_taken_0x208ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA0u;
        // 0x208ea4: 0x96030090  lhu         $v1, 0x90($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ea0) {
            ctx->pc = 0x208EB8u;
            goto label_208eb8;
        }
    }
    ctx->pc = 0x208EA8u;
    // 0x208ea8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x208eac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208EACu;
    {
        const bool branch_taken_0x208eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EACu;
        // 0x208eb0: 0xa6020090  sh          $v0, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208eac) {
            ctx->pc = 0x208EC4u;
            goto label_208ec4;
        }
    }
    ctx->pc = 0x208EB4u;
    // 0x208eb4: 0x0  nop
    ctx->pc = 0x208eb4u;
    // NOP
label_208eb8:
    // 0x208eb8: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x208ebc: 0xc0a3ad4  jal         func_28EB50
    ctx->pc = 0x208EBCu;
    SET_GPR_U32(ctx, 31, 0x208EC4u);
    ctx->pc = 0x208EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EBCu;
    // 0x208ec0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB50u, 0x208EBCu, 0x208EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EC4u;
label_208ec4:
    // 0x208ec4: 0x86250090  lh          $a1, 0x90($s1)
    ctx->pc = 0x208ec4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x208ec8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x208EC8u;
    {
        const bool branch_taken_0x208ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC8u;
        // 0x208ecc: 0x86240012  lh          $a0, 0x12($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ec8) {
            ctx->pc = 0x208F40u;
            goto label_208f40;
        }
    }
    ctx->pc = 0x208ED0u;
label_208ed0:
    // 0x208ed0: 0x8e44069c  lw          $a0, 0x69C($s2)
    ctx->pc = 0x208ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x208ed4: 0x8e63069c  lw          $v1, 0x69C($s3)
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1692)));
    // 0x208ed8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x208edc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x208EDCu;
    {
        const bool branch_taken_0x208edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EDCu;
        // 0x208ee0: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208edc) {
            ctx->pc = 0x208F10u;
            goto label_208f10;
        }
    }
    ctx->pc = 0x208EE4u;
    // 0x208ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ee8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208eec: 0xa6420092  sh          $v0, 0x92($s2)
    ctx->pc = 0x208eecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x208ef0: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x208ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x208ef4: 0xa6630092  sh          $v1, 0x92($s3)
    ctx->pc = 0x208ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x208ef8: 0x96420090  lhu         $v0, 0x90($s2)
    ctx->pc = 0x208ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x208efc: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x208efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x208f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208f04: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x208f08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x208F08u;
    {
        const bool branch_taken_0x208f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F08u;
        // 0x208f0c: 0xa6420090  sh          $v0, 0x90($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f08) {
            ctx->pc = 0x208F3Cu;
            goto label_208f3c;
        }
    }
    ctx->pc = 0x208F10u;
label_208f10:
    // 0x208f10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x208F10u;
    {
        const bool branch_taken_0x208f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F10u;
        // 0x208f14: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f10) {
            ctx->pc = 0x208F50u;
            goto label_208f50;
        }
    }
    ctx->pc = 0x208F18u;
    // 0x208f18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208f20: 0xa6420092  sh          $v0, 0x92($s2)
    ctx->pc = 0x208f20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x208f24: 0xa6630092  sh          $v1, 0x92($s3)
    ctx->pc = 0x208f24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x208f28: 0x96620090  lhu         $v0, 0x90($s3)
    ctx->pc = 0x208f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x208f2c: 0x86640012  lh          $a0, 0x12($s3)
    ctx->pc = 0x208f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x208f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208f34: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x208f38: 0xa6620090  sh          $v0, 0x90($s3)
    ctx->pc = 0x208f38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
label_208f3c:
    // 0x208f3c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x208f3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_208f40:
    // 0x208f40: 0xc0a3ad4  jal         func_28EB50
    ctx->pc = 0x208F40u;
    SET_GPR_U32(ctx, 31, 0x208F48u);
    ctx->pc = 0x208F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F40u;
    // 0x208f44: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB50u, 0x208F40u, 0x208F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F48u;
label_208f48:
    // 0x208f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208F48u;
    {
        const bool branch_taken_0x208f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F48u;
        // 0x208f4c: 0x26a48858  addiu       $a0, $s5, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f48) {
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208F50u;
label_208f50:
    // 0x208f50: 0x26a48858  addiu       $a0, $s5, -0x77A8
    ctx->pc = 0x208f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
label_208f54:
    // 0x208f54: 0x8f82973c  lw          $v0, -0x68C4($gp)
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x208f58: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x208f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x208f5c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208f60: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x208F60u;
    {
        const bool branch_taken_0x208f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f60) {
            ctx->pc = 0x208F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F60u;
            // 0x208f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208F68u;
    // 0x208f68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x208f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x208f6c: 0x86420090  lh          $v0, 0x90($s2)
    ctx->pc = 0x208f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x208f70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208f74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208F74u;
    {
        const bool branch_taken_0x208f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F74u;
        // 0x208f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f74) {
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208F7Cu;
    // 0x208f7c: 0x86620090  lh          $v0, 0x90($s3)
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x208f80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208f84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208F84u;
    {
        const bool branch_taken_0x208f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F84u;
        // 0x208f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f84) {
            ctx->pc = 0x208F9Cu;
            goto label_208f9c;
        }
    }
    ctx->pc = 0x208F8Cu;
    // 0x208f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208f90:
    // 0x208f90: 0xc0822a4  jal         func_208A90
    ctx->pc = 0x208F90u;
    SET_GPR_U32(ctx, 31, 0x208F98u);
    ctx->pc = 0x208F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F90u;
    // 0x208f94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A90u, 0x208F90u, 0x208F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F98u;
label_208f98:
    // 0x208f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208f9c:
    // 0x208f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208fa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x208fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208fa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x208fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208fac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x208facu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x208fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x208FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB4u;
        // 0x208fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208FBCu;
    // 0x208fbc: 0x0  nop
    ctx->pc = 0x208fbcu;
    // NOP
    ctx->pc = 0x208fc0u;
}
