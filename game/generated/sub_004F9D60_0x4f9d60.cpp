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

// Function: sub_004F9D60
// Address: 0x4f9d60 - 0x4f9f08
void sub_004F9D60_0x4f9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9D60_0x4f9d60");
#endif

    switch (ctx->pc) {
        case 0x4f9d70u: goto label_4f9d70;
        case 0x4f9d90u: goto label_4f9d90;
        case 0x4f9e44u: goto label_4f9e44;
        case 0x4f9e58u: goto label_4f9e58;
        case 0x4f9ea0u: goto label_4f9ea0;
        case 0x4f9ec8u: goto label_4f9ec8;
        default: break;
    }

    ctx->pc = 0x4f9d60u;

    // 0x4f9d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f9d68: 0xc12a6c4  jal         func_4A9B10
    ctx->pc = 0x4F9D68u;
    SET_GPR_U32(ctx, 31, 0x4F9D70u);
    ctx->pc = 0x4A9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B10u, 0x4F9D68u, 0x4F9D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9D70u;
label_4f9d70:
    // 0x4f9d70: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x4f9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x4f9d74: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x4f9d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4f9d78: 0x246b1400  addiu       $t3, $v1, 0x1400
    ctx->pc = 0x4f9d78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x4f9d7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4f9d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9d80: 0x256e0002  addiu       $t6, $t3, 0x2
    ctx->pc = 0x4f9d80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4f9d84: 0x256d0004  addiu       $t5, $t3, 0x4
    ctx->pc = 0x4f9d84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4f9d88: 0x256c0006  addiu       $t4, $t3, 0x6
    ctx->pc = 0x4f9d88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x4f9d8c: 0x0  nop
    ctx->pc = 0x4f9d8cu;
    // NOP
label_4f9d90:
    // 0x4f9d90: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x4f9d90u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9d94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9d98: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4f9d98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9d9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9da0: 0x81e00  sll         $v1, $t0, 24
    ctx->pc = 0x4f9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4f9da4: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x4f9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x4f9da8: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x4f9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x4f9dac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f9dacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f9db0: 0x654025  or          $t0, $v1, $a1
    ctx->pc = 0x4f9db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f9db4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x4f9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4f9db8: 0x8b1021  addu        $v0, $a0, $t3
    ctx->pc = 0x4f9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4f9dbc: 0x8e3021  addu        $a2, $a0, $t6
    ctx->pc = 0x4f9dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x4f9dc0: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x4f9dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f9dc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f9dc8: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x4f9dc8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f9dcc: 0x8d3821  addu        $a3, $a0, $t5
    ctx->pc = 0x4f9dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x4f9dd0: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x4f9dd0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9dd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9dd8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4f9dd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9ddc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9de0: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x4f9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4f9de4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4f9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4f9de8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9de8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9dec: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x4f9decu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f9df0: 0x294503f6  slti        $a1, $t2, 0x3F6
    ctx->pc = 0x4f9df0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)1014) ? 1 : 0);
    // 0x4f9df4: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x4f9df4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f9df8: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x4f9df8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9dfc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9e00: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x4f9e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9e04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9e08: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x4f9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4f9e0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9e10: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4f9e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f9e14: 0xa4e80000  sh          $t0, 0x0($a3)
    ctx->pc = 0x4f9e14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f9e18: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x4f9e18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9e1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9e20: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x4f9e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9e24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9e28: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x4f9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4f9e2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9e2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9e30: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4f9e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f9e34: 0x14a0ffd6  bnez        $a1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4F9E34u;
    {
        const bool branch_taken_0x4f9e34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9E34u;
        // 0x4f9e38: 0xa4880000  sh          $t0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9e34) {
            ctx->pc = 0x4F9D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9d90;
        }
    }
    ctx->pc = 0x4F9E3Cu;
    // 0x4f9e3c: 0xc12a6c4  jal         func_4A9B10
    ctx->pc = 0x4F9E3Cu;
    SET_GPR_U32(ctx, 31, 0x4F9E44u);
    ctx->pc = 0x4A9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B10u, 0x4F9E3Cu, 0x4F9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9E44u;
label_4f9e44:
    // 0x4f9e44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4f9e44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9e48: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x4f9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x4f9e4c: 0x24491fd0  addiu       $t1, $v0, 0x1FD0
    ctx->pc = 0x4f9e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
    // 0x4f9e50: 0x24661400  addiu       $a2, $v1, 0x1400
    ctx->pc = 0x4f9e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x4f9e54: 0x0  nop
    ctx->pc = 0x4f9e54u;
    // NOP
label_4f9e58:
    // 0x4f9e58: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x4f9e58u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9e5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4f9e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4f9e60: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x4f9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4f9e64: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4f9e64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f9e68: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x4f9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4f9e6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f9e70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9e74: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x4f9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x4f9e78: 0x45403  sra         $t2, $a0, 16
    ctx->pc = 0x4f9e78u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f9e7c: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x4f9e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f9e80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4f9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f9e84: 0x2942325c  slti        $v0, $t2, 0x325C
    ctx->pc = 0x4f9e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12892) ? 1 : 0);
    // 0x4f9e88: 0xa46832c0  sh          $t0, 0x32C0($v1)
    ctx->pc = 0x4f9e88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12992), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f9e8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4F9E8Cu;
    {
        const bool branch_taken_0x4f9e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9E8Cu;
        // 0x4f9e90: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9e8c) {
            ctx->pc = 0x4F9E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9e58;
        }
    }
    ctx->pc = 0x4F9E94u;
    // 0x4f9e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f9e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9e98: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9E98u;
        // 0x4f9e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9EA0u;
label_4f9ea0:
    // 0x4f9ea0: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f9ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9ea8: 0x24481400  addiu       $t0, $v0, 0x1400
    ctx->pc = 0x4f9ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
    // 0x4f9eac: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x4f9eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4f9eb0: 0x250d0002  addiu       $t5, $t0, 0x2
    ctx->pc = 0x4f9eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4f9eb4: 0x240c026f  addiu       $t4, $zero, 0x26F
    ctx->pc = 0x4f9eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    // 0x4f9eb8: 0x250b0004  addiu       $t3, $t0, 0x4
    ctx->pc = 0x4f9eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4f9ebc: 0x250a0006  addiu       $t2, $t0, 0x6
    ctx->pc = 0x4f9ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x4f9ec0: 0x240901ff  addiu       $t1, $zero, 0x1FF
    ctx->pc = 0x4f9ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x4f9ec4: 0x0  nop
    ctx->pc = 0x4f9ec4u;
    // NOP
label_4f9ec8:
    // 0x4f9ec8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x4f9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4f9ecc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9ed0: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x4f9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x4f9ed4: 0x28e60010  slti        $a2, $a3, 0x10
    ctx->pc = 0x4f9ed4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4f9ed8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x4f9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4f9edc: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f9ee0: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x4f9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4f9ee4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4f9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4f9ee8: 0xa46e0000  sh          $t6, 0x0($v1)
    ctx->pc = 0x4f9ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x4f9eec: 0xa48c0000  sh          $t4, 0x0($a0)
    ctx->pc = 0x4f9eecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x4f9ef0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4f9ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f9ef4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x4F9EF4u;
    {
        const bool branch_taken_0x4f9ef4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9EF4u;
        // 0x4f9ef8: 0xa4a90000  sh          $t1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9ef4) {
            ctx->pc = 0x4F9EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9ec8;
        }
    }
    ctx->pc = 0x4F9EFCu;
    // 0x4f9efc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9F04u;
    // 0x4f9f04: 0x0  nop
    ctx->pc = 0x4f9f04u;
    // NOP
    ctx->pc = 0x4f9f08u;
}
