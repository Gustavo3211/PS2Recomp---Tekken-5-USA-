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

// Function: sub_00512CE0
// Address: 0x512ce0 - 0x512e20
void sub_00512CE0_0x512ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512CE0_0x512ce0");
#endif

    switch (ctx->pc) {
        case 0x512d08u: goto label_512d08;
        case 0x512d58u: goto label_512d58;
        default: break;
    }

    ctx->pc = 0x512ce0u;

    // 0x512ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x512ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x512ce4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x512ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x512ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x512cec: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x512cecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x512cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512cf4: 0x2630ca40  addiu       $s0, $s1, -0x35C0
    ctx->pc = 0x512cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953536));
    // 0x512cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x512cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x512d00: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x512D00u;
    SET_GPR_U32(ctx, 31, 0x512D08u);
    ctx->pc = 0x512D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512D00u;
    // 0x512d04: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x512D00u, 0x512D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512D08u;
label_512d08:
    // 0x512d08: 0x260331c8  addiu       $v1, $s0, 0x31C8
    ctx->pc = 0x512d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12744));
    // 0x512d0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x512d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x512d10: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x512d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x512d14: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x512d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x512d18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x512d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x512d1c: 0x34421070  ori         $v0, $v0, 0x1070
    ctx->pc = 0x512d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4208);
    // 0x512d20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x512d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x512d24: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x512d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512d28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512d2c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x512d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x512d30: 0xac22123c  sw          $v0, 0x123C($at)
    ctx->pc = 0x512d30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4668), GPR_U32(ctx, 2));
    // 0x512d34: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x512d34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512d38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512d3c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x512d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x512d40: 0xac241238  sw          $a0, 0x1238($at)
    ctx->pc = 0x512d40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4664), GPR_U32(ctx, 4));
    // 0x512d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x512d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x512d48: 0xae033000  sw          $v1, 0x3000($s0)
    ctx->pc = 0x512d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12288), GPR_U32(ctx, 3));
    // 0x512d4c: 0x250a0004  addiu       $t2, $t0, 0x4
    ctx->pc = 0x512d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x512d50: 0xae043004  sw          $a0, 0x3004($s0)
    ctx->pc = 0x512d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12292), GPR_U32(ctx, 4));
    // 0x512d54: 0x25092e38  addiu       $t1, $t0, 0x2E38
    ctx->pc = 0x512d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 11832));
label_512d58:
    // 0x512d58: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x512d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x512d5c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x512d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x512d60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x512d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x512d64: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x512d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x512d68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x512d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x512d6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x512d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x512d70: 0x28e6007f  slti        $a2, $a3, 0x7F
    ctx->pc = 0x512d70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x512d74: 0x24433000  addiu       $v1, $v0, 0x3000
    ctx->pc = 0x512d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x512d78: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x512d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x512d7c: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x512d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x512d80: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x512d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x512d84: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x512d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x512d88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x512d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x512d8c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x512D8Cu;
    {
        const bool branch_taken_0x512d8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x512D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512D8Cu;
        // 0x512d90: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512d8c) {
            ctx->pc = 0x512D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512d58;
        }
    }
    ctx->pc = 0x512D94u;
    // 0x512d94: 0x2622ca40  addiu       $v0, $s1, -0x35C0
    ctx->pc = 0x512d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953536));
    // 0x512d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512d9c: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x512d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x512da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x512da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x512da8: 0x24a5f080  addiu       $a1, $a1, -0xF80
    ctx->pc = 0x512da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x512dac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x512dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x512db0: 0x34841a00  ori         $a0, $a0, 0x1A00
    ctx->pc = 0x512db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6656);
    // 0x512db4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x512db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x512db8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x512db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x512dbc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x512dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x512dc0: 0x34c61238  ori         $a2, $a2, 0x1238
    ctx->pc = 0x512dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4664);
    // 0x512dc4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x512dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x512dc8: 0x24473000  addiu       $a3, $v0, 0x3000
    ctx->pc = 0x512dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x512dcc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x512dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x512dd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512dd4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512dd8: 0xa4281a08  sh          $t0, 0x1A08($at)
    ctx->pc = 0x512dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6664), (uint16_t)GPR_U32(ctx, 8));
    // 0x512ddc: 0xa4a34ef0  sh          $v1, 0x4EF0($a1)
    ctx->pc = 0x512ddcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903F70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903F70u, _value); } while (0);
    // 0x512de0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512de4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512de4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512de8: 0xac262004  sw          $a2, 0x2004($at)
    ctx->pc = 0x512de8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8196), GPR_U32(ctx, 6));
    // 0x512dec: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x512decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x512df0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512df4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512df4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512df8: 0xac272000  sw          $a3, 0x2000($at)
    ctx->pc = 0x512df8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 7));
    // 0x512dfc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512e00: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512e00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512e04: 0xac241a04  sw          $a0, 0x1A04($at)
    ctx->pc = 0x512e04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6660), GPR_U32(ctx, 4));
    // 0x512e08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512e0c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512e10: 0xa4282008  sh          $t0, 0x2008($at)
    ctx->pc = 0x512e10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8200), (uint16_t)GPR_U32(ctx, 8));
    // 0x512e14: 0xa4a00090  sh          $zero, 0x90($a1)
    ctx->pc = 0x512e14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8FF110u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF110u, _value); } while (0);
    // 0x512e18: 0x3e00008  jr          $ra
    ctx->pc = 0x512E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512E18u;
        // 0x512e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512E20u;
}
