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

// Function: entry_514d08
// Address: 0x514d08 - 0x514e40
void entry_514d08_0x514e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_514d08_0x514e40");
#endif

    switch (ctx->pc) {
        case 0x514d48u: goto label_514d48;
        case 0x514d68u: goto label_514d68;
        case 0x514d80u: goto label_514d80;
        case 0x514d8cu: goto label_514d8c;
        case 0x514decu: goto label_514dec;
        case 0x514df8u: goto label_514df8;
        case 0x514e04u: goto label_514e04;
        case 0x514e14u: goto label_514e14;
        default: break;
    }

    ctx->pc = 0x514d08u;

    // 0x514d08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x514d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x514d0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x514d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x514d10: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x514d10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x514d14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x514d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x514d18: 0x8e629b3c  lw          $v0, -0x64C4($s3)
    ctx->pc = 0x514d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729B3Cu));
    // 0x514d1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x514d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x514d20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x514d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x514d24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x514D24u;
    {
        const bool branch_taken_0x514d24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x514D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514D24u;
        // 0x514d28: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514d24) {
            ctx->pc = 0x514D34u;
            goto label_514d34;
        }
    }
    ctx->pc = 0x514D2Cu;
    // 0x514d2c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x514D2Cu;
    {
        const bool branch_taken_0x514d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514D2Cu;
        // 0x514d30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514d2c) {
            ctx->pc = 0x514E24u;
            goto label_514e24;
        }
    }
    ctx->pc = 0x514D34u;
label_514d34:
    // 0x514d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x514d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514d38: 0x34058170  ori         $a1, $zero, 0x8170
    ctx->pc = 0x514d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
    // 0x514d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x514d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514d40: 0xc145220  jal         func_514880
    ctx->pc = 0x514D40u;
    SET_GPR_U32(ctx, 31, 0x514D48u);
    ctx->pc = 0x514D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514D40u;
    // 0x514d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x514D40u, 0x514D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514D48u;
label_514d48:
    // 0x514d48: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x514d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x514d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x514d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514d50: 0x34058160  ori         $a1, $zero, 0x8160
    ctx->pc = 0x514d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x514d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x514d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514d58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x514d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514d5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x514d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514d60: 0xc145220  jal         func_514880
    ctx->pc = 0x514D60u;
    SET_GPR_U32(ctx, 31, 0x514D68u);
    ctx->pc = 0x514D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514D60u;
    // 0x514d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x514D60u, 0x514D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514D68u;
label_514d68:
    // 0x514d68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x514d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514d6c: 0x34058160  ori         $a1, $zero, 0x8160
    ctx->pc = 0x514d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x514d70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x514d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x514d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514d78: 0xc145220  jal         func_514880
    ctx->pc = 0x514D78u;
    SET_GPR_U32(ctx, 31, 0x514D80u);
    ctx->pc = 0x514D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514D78u;
    // 0x514d7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x514D78u, 0x514D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514D80u;
label_514d80:
    // 0x514d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x514d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514d84: 0xc145220  jal         func_514880
    ctx->pc = 0x514D84u;
    SET_GPR_U32(ctx, 31, 0x514D8Cu);
    ctx->pc = 0x514D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514D84u;
    // 0x514d88: 0x3405e630  ori         $a1, $zero, 0xE630 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58928);
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x514D84u, 0x514D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514D8Cu;
label_514d8c:
    // 0x514d8c: 0x3c1200d0  lui         $s2, 0xD0
    ctx->pc = 0x514d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)208 << 16));
    // 0x514d90: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x514d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x514d94: 0x26525600  addiu       $s2, $s2, 0x5600
    ctx->pc = 0x514d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22016));
    // 0x514d98: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x514d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x514d9c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x514d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x514da0: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x514da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x514da4: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x514da4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x514da8: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x514da8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x514dac: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x514dacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x514db0: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x514db0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x514db4: 0x3c0c0073  lui         $t4, 0x73
    ctx->pc = 0x514db4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)115 << 16));
    // 0x514db8: 0x3c0400d0  lui         $a0, 0xD0
    ctx->pc = 0x514db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)208 << 16));
    // 0x514dbc: 0xac409b18  sw          $zero, -0x64E8($v0)
    ctx->pc = 0x514dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B18u, _value); } while (0);
    // 0x514dc0: 0x24845618  addiu       $a0, $a0, 0x5618
    ctx->pc = 0x514dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22040));
    // 0x514dc4: 0xac609b1c  sw          $zero, -0x64E4($v1)
    ctx->pc = 0x514dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B1Cu, _value); } while (0);
    // 0x514dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514dcc: 0xacc09b20  sw          $zero, -0x64E0($a2)
    ctx->pc = 0x514dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B20u, _value); } while (0);
    // 0x514dd0: 0xace09b24  sw          $zero, -0x64DC($a3)
    ctx->pc = 0x514dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B24u, _value); } while (0);
    // 0x514dd4: 0xad009b28  sw          $zero, -0x64D8($t0)
    ctx->pc = 0x514dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B28u, _value); } while (0);
    // 0x514dd8: 0xad209b2c  sw          $zero, -0x64D4($t1)
    ctx->pc = 0x514dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B2Cu, _value); } while (0);
    // 0x514ddc: 0xad409b30  sw          $zero, -0x64D0($t2)
    ctx->pc = 0x514ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B30u, _value); } while (0);
    // 0x514de0: 0xad609b34  sw          $zero, -0x64CC($t3)
    ctx->pc = 0x514de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B34u, _value); } while (0);
    // 0x514de4: 0xc044d16  jal         func_113458
    ctx->pc = 0x514DE4u;
    SET_GPR_U32(ctx, 31, 0x514DECu);
    ctx->pc = 0x514DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514DE4u;
    // 0x514de8: 0xad809b38  sw          $zero, -0x64C8($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294941496), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113458u, 0x514DE4u, 0x514DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514DECu;
label_514dec:
    // 0x514dec: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x514decu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x514df0: 0xc044d3c  jal         func_1134F0
    ctx->pc = 0x514DF0u;
    SET_GPR_U32(ctx, 31, 0x514DF8u);
    ctx->pc = 0x514DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514DF0u;
    // 0x514df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134F0u, 0x514DF0u, 0x514DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514DF8u;
label_514df8:
    // 0x514df8: 0x8e649b3c  lw          $a0, -0x64C4($s3)
    ctx->pc = 0x514df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941500)));
    // 0x514dfc: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x514DFCu;
    SET_GPR_U32(ctx, 31, 0x514E04u);
    ctx->pc = 0x514E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514DFCu;
    // 0x514e00: 0x222800a  movz        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1F0u, 0x514DFCu, 0x514E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E04u;
label_514e04:
    // 0x514e04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x514e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x514e08: 0x8e649b3c  lw          $a0, -0x64C4($s3)
    ctx->pc = 0x514e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941500)));
    // 0x514e0c: 0xc043c6c  jal         func_10F1B0
    ctx->pc = 0x514E0Cu;
    SET_GPR_U32(ctx, 31, 0x514E14u);
    ctx->pc = 0x514E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514E0Cu;
    // 0x514e10: 0x222800a  movz        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1B0u, 0x514E0Cu, 0x514E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E14u;
label_514e14:
    // 0x514e14: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x514e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x514e18: 0xae719b3c  sw          $s1, -0x64C4($s3)
    ctx->pc = 0x514e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941500), GPR_U32(ctx, 17));
    // 0x514e1c: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x514e1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x514e20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x514e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_514e24:
    // 0x514e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x514e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x514e28: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x514e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x514e2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x514e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x514e30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x514e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x514e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x514e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x514e38: 0x3e00008  jr          $ra
    ctx->pc = 0x514E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514E38u;
        // 0x514e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514E40u;
}
