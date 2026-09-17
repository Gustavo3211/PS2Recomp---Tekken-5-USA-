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

// Function: sub_00364D78
// Address: 0x364d78 - 0x364f98
void sub_00364D78_0x364d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364D78_0x364d78");
#endif

    switch (ctx->pc) {
        case 0x364df0u: goto label_364df0;
        case 0x364e18u: goto label_364e18;
        case 0x364e24u: goto label_364e24;
        case 0x364e4cu: goto label_364e4c;
        case 0x364e64u: goto label_364e64;
        case 0x364e7cu: goto label_364e7c;
        case 0x364e94u: goto label_364e94;
        case 0x364eb4u: goto label_364eb4;
        case 0x364ed8u: goto label_364ed8;
        case 0x364ee4u: goto label_364ee4;
        case 0x364ef8u: goto label_364ef8;
        case 0x364f24u: goto label_364f24;
        case 0x364f44u: goto label_364f44;
        case 0x364f60u: goto label_364f60;
        default: break;
    }

    ctx->pc = 0x364d78u;

    // 0x364d78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364d7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x364d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x364d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x364d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x364d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x364d8c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x364d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x364d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x364d94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x364d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x364d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x364d9c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x364d9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364da0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x364da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x364da4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x364da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364da8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x364da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x364dac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x364dacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364db4: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x364db4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x364db8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364dbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x364dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x364dc0: 0xa2240884  sb          $a0, 0x884($s1)
    ctx->pc = 0x364dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2180), (uint8_t)GPR_U32(ctx, 4));
    // 0x364dc4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x364dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x364dc8: 0x4610067  bgez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x364DC8u;
    {
        const bool branch_taken_0x364dc8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x364DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364DC8u;
        // 0x364dcc: 0xae2009d8  sw          $zero, 0x9D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364dc8) {
            ctx->pc = 0x364F68u;
            goto label_364f68;
        }
    }
    ctx->pc = 0x364DD0u;
    // 0x364dd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x364dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364dd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364DD4u;
    {
        const bool branch_taken_0x364dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364dd4) {
            ctx->pc = 0x364DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364DD4u;
            // 0x364dd8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364DE8u;
            goto label_364de8;
        }
    }
    ctx->pc = 0x364DDCu;
    // 0x364ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x364DDCu;
    {
        const bool branch_taken_0x364ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364DDCu;
        // 0x364de0: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ddc) {
            ctx->pc = 0x364DF4u;
            goto label_364df4;
        }
    }
    ctx->pc = 0x364DE4u;
    // 0x364de4: 0x0  nop
    ctx->pc = 0x364de4u;
    // NOP
label_364de8:
    // 0x364de8: 0xc0d6b70  jal         func_35ADC0
    ctx->pc = 0x364DE8u;
    SET_GPR_U32(ctx, 31, 0x364DF0u);
    ctx->pc = 0x364DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364DE8u;
    // 0x364dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ADC0u, 0x364DE8u, 0x364DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DF0u;
label_364df0:
    // 0x364df0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x364df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_364df4:
    // 0x364df4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x364df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x364df8: 0x460005b  bltz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x364DF8u;
    {
        const bool branch_taken_0x364df8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x364DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364DF8u;
        // 0x364dfc: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364df8) {
            ctx->pc = 0x364F68u;
            goto label_364f68;
        }
    }
    ctx->pc = 0x364E00u;
    // 0x364e00: 0x822209dc  lb          $v0, 0x9DC($s1)
    ctx->pc = 0x364e00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2524)));
    // 0x364e04: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364E04u;
    {
        const bool branch_taken_0x364e04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x364E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E04u;
        // 0x364e08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e04) {
            ctx->pc = 0x364E34u;
            goto label_364e34;
        }
    }
    ctx->pc = 0x364E0Cu;
    // 0x364e0c: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x364e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x364e10: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x364e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364e14: 0x0  nop
    ctx->pc = 0x364e14u;
    // NOP
label_364e18:
    // 0x364e18: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x364e1c: 0xc0d8890  jal         func_362240
    ctx->pc = 0x364E1Cu;
    SET_GPR_U32(ctx, 31, 0x364E24u);
    ctx->pc = 0x364E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E1Cu;
    // 0x364e20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362240u, 0x364E1Cu, 0x364E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E24u;
label_364e24:
    // 0x364e24: 0x822309dc  lb          $v1, 0x9DC($s1)
    ctx->pc = 0x364e24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2524)));
    // 0x364e28: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x364e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x364e2c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364E2Cu;
    {
        const bool branch_taken_0x364e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x364e2c) {
            ctx->pc = 0x364E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364E2Cu;
            // 0x364e30: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364e18;
        }
    }
    ctx->pc = 0x364E34u;
label_364e34:
    // 0x364e34: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364e38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x364e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x364e3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x364e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x364e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364e44: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364E44u;
    SET_GPR_U32(ctx, 31, 0x364E4Cu);
    ctx->pc = 0x364E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E44u;
    // 0x364e48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364E44u, 0x364E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E4Cu;
label_364e4c:
    // 0x364e4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x364e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364e50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364e54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364e58: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x364e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x364e5c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364E5Cu;
    SET_GPR_U32(ctx, 31, 0x364E64u);
    ctx->pc = 0x364E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E5Cu;
    // 0x364e60: 0x8e270024  lw          $a3, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364E5Cu, 0x364E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E64u;
label_364e64:
    // 0x364e64: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x364e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x364e68: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364e6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364e70: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x364e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x364e74: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364E74u;
    SET_GPR_U32(ctx, 31, 0x364E7Cu);
    ctx->pc = 0x364E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E74u;
    // 0x364e78: 0x8e270028  lw          $a3, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364E74u, 0x364E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E7Cu;
label_364e7c:
    // 0x364e7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x364e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x364e80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364e84: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364e88: 0x86260038  lh          $a2, 0x38($s1)
    ctx->pc = 0x364e88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x364e8c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364E8Cu;
    SET_GPR_U32(ctx, 31, 0x364E94u);
    ctx->pc = 0x364E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E8Cu;
    // 0x364e90: 0x8627003a  lh          $a3, 0x3A($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364E8Cu, 0x364E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E94u;
label_364e94:
    // 0x364e94: 0x82220884  lb          $v0, 0x884($s1)
    ctx->pc = 0x364e94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2180)));
    // 0x364e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x364E98u;
    {
        const bool branch_taken_0x364e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E98u;
        // 0x364e9c: 0x26c7f800  addiu       $a3, $s6, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e98) {
            ctx->pc = 0x364EC0u;
            goto label_364ec0;
        }
    }
    ctx->pc = 0x364EA0u;
    // 0x364ea0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364ea4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x364ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x364ea8: 0x26660800  addiu       $a2, $s3, 0x800
    ctx->pc = 0x364ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    // 0x364eac: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364EACu;
    SET_GPR_U32(ctx, 31, 0x364EB4u);
    ctx->pc = 0x364EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EACu;
    // 0x364eb0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364EACu, 0x364EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EB4u;
label_364eb4:
    // 0x364eb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x364EB4u;
    {
        const bool branch_taken_0x364eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EB4u;
        // 0x364eb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364eb4) {
            ctx->pc = 0x364EDCu;
            goto label_364edc;
        }
    }
    ctx->pc = 0x364EBCu;
    // 0x364ebc: 0x0  nop
    ctx->pc = 0x364ebcu;
    // NOP
label_364ec0:
    // 0x364ec0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x364ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364ec4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x364ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x364ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ed0: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x364ED0u;
    SET_GPR_U32(ctx, 31, 0x364ED8u);
    ctx->pc = 0x364ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364ED0u;
    // 0x364ed4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x364ED0u, 0x364ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364ED8u;
label_364ed8:
    // 0x364ed8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x364ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_364edc:
    // 0x364edc: 0xc04a48c  jal         func_129230
    ctx->pc = 0x364EDCu;
    SET_GPR_U32(ctx, 31, 0x364EE4u);
    ctx->pc = 0x364EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EDCu;
    // 0x364ee0: 0x26240888  addiu       $a0, $s1, 0x888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x364EDCu, 0x364EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EE4u;
label_364ee4:
    // 0x364ee4: 0xae37000c  sw          $s7, 0xC($s1)
    ctx->pc = 0x364ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 23));
    // 0x364ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364eec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364ef0: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x364EF0u;
    SET_GPR_U32(ctx, 31, 0x364EF8u);
    ctx->pc = 0x364EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EF0u;
    // 0x364ef4: 0x2406008e  addiu       $a2, $zero, 0x8E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x364EF0u, 0x364EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EF8u;
label_364ef8:
    // 0x364ef8: 0xa23509b4  sb          $s5, 0x9B4($s1)
    ctx->pc = 0x364ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2484), (uint8_t)GPR_U32(ctx, 21));
    // 0x364efc: 0x82230884  lb          $v1, 0x884($s1)
    ctx->pc = 0x364efcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2180)));
    // 0x364f00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x364f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364f04: 0xae2209b8  sw          $v0, 0x9B8($s1)
    ctx->pc = 0x364f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2488), GPR_U32(ctx, 2));
    // 0x364f08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x364F08u;
    {
        const bool branch_taken_0x364f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F08u;
        // 0x364f0c: 0xa22009cc  sb          $zero, 0x9CC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2508), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364f08) {
            ctx->pc = 0x364F30u;
            goto label_364f30;
        }
    }
    ctx->pc = 0x364F10u;
    // 0x364f10: 0xae330880  sw          $s3, 0x880($s1)
    ctx->pc = 0x364f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2176), GPR_U32(ctx, 19));
    // 0x364f14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f18: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x364f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364f1c: 0xc0d94d0  jal         func_365340
    ctx->pc = 0x364F1Cu;
    SET_GPR_U32(ctx, 31, 0x364F24u);
    ctx->pc = 0x364F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F1Cu;
    // 0x364f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365340u, 0x364F1Cu, 0x364F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F24u;
label_364f24:
    // 0x364f24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x364F24u;
    {
        const bool branch_taken_0x364f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F24u;
        // 0x364f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364f24) {
            ctx->pc = 0x364F68u;
            goto label_364f68;
        }
    }
    ctx->pc = 0x364F2Cu;
    // 0x364f2c: 0x0  nop
    ctx->pc = 0x364f2cu;
    // NOP
label_364f30:
    // 0x364f30: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x364f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x364f34: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x364f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x364f38: 0xae300880  sw          $s0, 0x880($s1)
    ctx->pc = 0x364f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2176), GPR_U32(ctx, 16));
    // 0x364f3c: 0xc0d6bd4  jal         func_35AF50
    ctx->pc = 0x364F3Cu;
    SET_GPR_U32(ctx, 31, 0x364F44u);
    ctx->pc = 0x364F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F3Cu;
    // 0x364f40: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF50u, 0x364F3Cu, 0x364F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F44u;
label_364f44:
    // 0x364f44: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x364f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x364f48: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x364f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x364f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x364f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f50: 0x24e75340  addiu       $a3, $a3, 0x5340
    ctx->pc = 0x364f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21312));
    // 0x364f54: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x364f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x364f58: 0xc0d6bce  jal         func_35AF38
    ctx->pc = 0x364F58u;
    SET_GPR_U32(ctx, 31, 0x364F60u);
    ctx->pc = 0x364F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F58u;
    // 0x364f5c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF38u, 0x364F58u, 0x364F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F60u;
label_364f60:
    // 0x364f60: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x364f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x364f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364f68:
    // 0x364f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x364f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364f74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x364f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x364f78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x364f78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364f7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x364f7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x364f80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x364f80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364f84: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x364f84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364f88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x364f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x364F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F8Cu;
        // 0x364f90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364F94u;
    // 0x364f94: 0x0  nop
    ctx->pc = 0x364f94u;
    // NOP
    ctx->pc = 0x364f98u;
}
