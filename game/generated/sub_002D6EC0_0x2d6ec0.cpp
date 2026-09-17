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

// Function: sub_002D6EC0
// Address: 0x2d6ec0 - 0x2d6ff0
void sub_002D6EC0_0x2d6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6EC0_0x2d6ec0");
#endif

    switch (ctx->pc) {
        case 0x2d6f3cu: goto label_2d6f3c;
        case 0x2d6f78u: goto label_2d6f78;
        case 0x2d6f94u: goto label_2d6f94;
        default: break;
    }

    ctx->pc = 0x2d6ec0u;

    // 0x2d6ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6ec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6ed4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d6ed8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d6edc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d6edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d6ee0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6ee4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d6ee8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6eec: 0x8c4294ec  lw          $v0, -0x6B14($v0)
    ctx->pc = 0x2d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939884)));
    // 0x2d6ef0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D6EF0u;
    {
        const bool branch_taken_0x2d6ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EF0u;
        // 0x2d6ef4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ef0) {
            ctx->pc = 0x2D6FCCu;
            goto label_2d6fcc;
        }
    }
    ctx->pc = 0x2D6EF8u;
    // 0x2d6ef8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2d6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2d6efc: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x2d6efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d6f00: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d6f04: 0x3c0880ff  lui         $t0, 0x80FF
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33023 << 16));
    // 0x2d6f08: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2d6f08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2d6f0c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2d6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2d6f10: 0xaf82bbb4  sw          $v0, -0x444C($gp)
    ctx->pc = 0x2d6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949812), GPR_U32(ctx, 2));
    // 0x2d6f14: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2d6f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f20: 0x3c130002  lui         $s3, 0x2
    ctx->pc = 0x2d6f20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2 << 16));
    // 0x2d6f24: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x2d6f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2d6f28: 0x8e7394ec  lw          $s3, -0x6B14($s3)
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939884)));
    // 0x2d6f2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d6f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d6f30: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2d6f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d6f34: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2D6F34u;
    SET_GPR_U32(ctx, 31, 0x2D6F3Cu);
    ctx->pc = 0x2D6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F34u;
    // 0x2d6f38: 0x9672000e  lhu         $s2, 0xE($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2D6F34u, 0x2D6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F3Cu;
label_2d6f3c:
    // 0x2d6f3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d6f40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6f44: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d6f48: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d6f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6f50: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d6f54: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6f58: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d6f58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d6f5c: 0xac2294e8  sw          $v0, -0x6B18($at)
    ctx->pc = 0x2d6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 2));
    // 0x2d6f60: 0x8f90bbb4  lw          $s0, -0x444C($gp)
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2d6f64: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2d6f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d6f68: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D6F68u;
    {
        const bool branch_taken_0x2d6f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6f68) {
            ctx->pc = 0x2D6F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6F68u;
            // 0x2d6f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6FD0u;
            goto label_2d6fd0;
        }
    }
    ctx->pc = 0x2D6F70u;
    // 0x2d6f70: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2d6f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6f74: 0x2414fffe  addiu       $s4, $zero, -0x2
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2d6f78:
    // 0x2d6f78: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6f7c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d6f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d6f80: 0xac3394ec  sw          $s3, -0x6B14($at)
    ctx->pc = 0x2d6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 19));
    // 0x2d6f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f8c: 0xc0b6196  jal         func_2D8658
    ctx->pc = 0x2D6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F94u);
    ctx->pc = 0x2D6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F8Cu;
    // 0x2d6f90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8658u, 0x2D6F8Cu, 0x2D6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F94u;
label_2d6f94:
    // 0x2d6f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f98: 0x14950004  bne         $a0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6F98u;
    {
        const bool branch_taken_0x2d6f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F98u;
        // 0x2d6f9c: 0x8f82bbb4  lw          $v0, -0x444C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f98) {
            ctx->pc = 0x2D6FACu;
            goto label_2d6fac;
        }
    }
    ctx->pc = 0x2D6FA0u;
    // 0x2d6fa0: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2d6fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6fa4: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2d6fa4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x2d6fa8: 0xaf82bbb4  sw          $v0, -0x444C($gp)
    ctx->pc = 0x2d6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949812), GPR_U32(ctx, 2));
label_2d6fac:
    // 0x2d6fac: 0x54940004  bnel        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6FACu;
    {
        const bool branch_taken_0x2d6fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d6fac) {
            ctx->pc = 0x2D6FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6FACu;
            // 0x2d6fb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6FC0u;
            goto label_2d6fc0;
        }
    }
    ctx->pc = 0x2D6FB4u;
    // 0x2d6fb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6FB4u;
    {
        const bool branch_taken_0x2d6fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FB4u;
        // 0x2d6fb8: 0xaf90bbb8  sw          $s0, -0x4448($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949816), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fb4) {
            ctx->pc = 0x2D6FCCu;
            goto label_2d6fcc;
        }
    }
    ctx->pc = 0x2D6FBCu;
    // 0x2d6fbc: 0x0  nop
    ctx->pc = 0x2d6fbcu;
    // NOP
label_2d6fc0:
    // 0x2d6fc0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2d6fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d6fc4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D6FC4u;
    {
        const bool branch_taken_0x2d6fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6fc4) {
            ctx->pc = 0x2D6F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6f78;
        }
    }
    ctx->pc = 0x2D6FCCu;
label_2d6fcc:
    // 0x2d6fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6fd0:
    // 0x2d6fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6fd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6fdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d6fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6fe0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d6fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d6fe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FE8u;
        // 0x2d6fec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FF0u;
}
