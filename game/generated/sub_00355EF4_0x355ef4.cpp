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

// Function: sub_00355EF4
// Address: 0x355ef4 - 0x3560fc
void sub_00355EF4_0x355ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355EF4_0x355ef4");
#endif

    switch (ctx->pc) {
        case 0x355f18u: goto label_355f18;
        case 0x355f78u: goto label_355f78;
        case 0x355f98u: goto label_355f98;
        case 0x355facu: goto label_355fac;
        case 0x355ffcu: goto label_355ffc;
        case 0x3560e0u: goto label_3560e0;
        default: break;
    }

    ctx->pc = 0x355ef4u;

    // 0x355ef4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x355ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x355ef8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x355ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x355efc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x355efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x355f00: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355f00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f04: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355f04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355f08: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x355f08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x355f0c: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355f10: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355F10u;
    SET_GPR_U32(ctx, 31, 0x355F18u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355F10u, 0x355F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F18u;
label_355f18:
    // 0x355f18: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355f1c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355f20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355f24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x355f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355f28: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x355f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x355f2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x355f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355f34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355f38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355f3c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x355f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x355f40: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x355f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x355f44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355f48: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x355f48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x355f4c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x355f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x355f50: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x355f54: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x355F54u;
    {
        const bool branch_taken_0x355f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355f54) {
            ctx->pc = 0x3560C8u;
            goto label_3560c8;
        }
    }
    ctx->pc = 0x355F5Cu;
    // 0x355f5c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x355f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x355f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f64: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x355f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x355f68: 0x2786c748  addiu       $a2, $gp, -0x38B8
    ctx->pc = 0x355f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952776));
    // 0x355f6c: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x355f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355f70: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x355F70u;
    SET_GPR_U32(ctx, 31, 0x355F78u);
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x355F70u, 0x355F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F78u;
label_355f78:
    // 0x355f78: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355f7c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355f80: 0x27c60020  addiu       $a2, $fp, 0x20
    ctx->pc = 0x355f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x355f84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355f88: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x355f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f90: 0xc0437dc  jal         func_10DF70
    ctx->pc = 0x355F90u;
    SET_GPR_U32(ctx, 31, 0x355F98u);
    ctx->pc = 0x10DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF70u, 0x355F90u, 0x355F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F98u;
label_355f98:
    // 0x355f98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355F98u;
    {
        const bool branch_taken_0x355f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355f98) {
            ctx->pc = 0x355FA8u;
            goto label_355fa8;
        }
    }
    ctx->pc = 0x355FA0u;
    // 0x355fa0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x355FA0u;
    {
        const bool branch_taken_0x355fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fa0) {
            ctx->pc = 0x355FE0u;
            goto label_355fe0;
        }
    }
    ctx->pc = 0x355FA8u;
label_355fa8:
    // 0x355fa8: 0xafc00060  sw          $zero, 0x60($fp)
    ctx->pc = 0x355fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 0));
label_355fac:
    // 0x355fac: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x355facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x355fb0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x355fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x355fb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x355fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x355fb8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x355fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355fbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355FBCu;
    {
        const bool branch_taken_0x355fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fbc) {
            ctx->pc = 0x355FCCu;
            goto label_355fcc;
        }
    }
    ctx->pc = 0x355FC4u;
    // 0x355fc4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x355FC4u;
    {
        const bool branch_taken_0x355fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fc4) {
            ctx->pc = 0x355F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355f78;
        }
    }
    ctx->pc = 0x355FCCu;
label_355fcc:
    // 0x355fcc: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x355fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x355fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355fd4: 0xafc20060  sw          $v0, 0x60($fp)
    ctx->pc = 0x355fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 2));
    // 0x355fd8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x355FD8u;
    {
        const bool branch_taken_0x355fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fd8) {
            ctx->pc = 0x355FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355fac;
        }
    }
    ctx->pc = 0x355FE0u;
label_355fe0:
    // 0x355fe0: 0x27c2000c  addiu       $v0, $fp, 0xC
    ctx->pc = 0x355fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x355fe4: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x355fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x355fe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x355fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x355fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ff0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x355ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ff4: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x355FF4u;
    SET_GPR_U32(ctx, 31, 0x355FFCu);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x355FF4u, 0x355FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FFCu;
label_355ffc:
    // 0x355ffc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x355ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x356000: 0xafc20064  sw          $v0, 0x64($fp)
    ctx->pc = 0x356000u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 2));
    // 0x356004: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x356004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x356008: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x356008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x35600c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x35600Cu;
    {
        const bool branch_taken_0x35600c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35600c) {
            ctx->pc = 0x35608Cu;
            goto label_35608c;
        }
    }
    ctx->pc = 0x356014u;
    // 0x356014: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x356014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x356018: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x356018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x35601c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35601Cu;
    {
        const bool branch_taken_0x35601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35601c) {
            ctx->pc = 0x35603Cu;
            goto label_35603c;
        }
    }
    ctx->pc = 0x356024u;
    // 0x356024: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x356024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x356028: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x356028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x35602c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x35602Cu;
    {
        const bool branch_taken_0x35602c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35602c) {
            ctx->pc = 0x3560A0u;
            goto label_3560a0;
        }
    }
    ctx->pc = 0x356034u;
    // 0x356034: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x356034u;
    {
        const bool branch_taken_0x356034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356034) {
            ctx->pc = 0x3560B4u;
            goto label_3560b4;
        }
    }
    ctx->pc = 0x35603Cu;
label_35603c:
    // 0x35603c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x356040: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x356040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x356044: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356044u;
    {
        const bool branch_taken_0x356044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356044) {
            ctx->pc = 0x356078u;
            goto label_356078;
        }
    }
    ctx->pc = 0x35604Cu;
    // 0x35604c: 0x8fc20064  lw          $v0, 0x64($fp)
    ctx->pc = 0x35604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x356050: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356050u;
    {
        const bool branch_taken_0x356050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356050) {
            ctx->pc = 0x356060u;
            goto label_356060;
        }
    }
    ctx->pc = 0x356058u;
    // 0x356058: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x356058u;
    {
        const bool branch_taken_0x356058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356058) {
            ctx->pc = 0x3560B4u;
            goto label_3560b4;
        }
    }
    ctx->pc = 0x356060u;
label_356060:
    // 0x356060: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x356060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x356064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356068: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x356068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35606c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x35606cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x356070: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x356070u;
    {
        const bool branch_taken_0x356070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356070) {
            ctx->pc = 0x3560D4u;
            goto label_3560d4;
        }
    }
    ctx->pc = 0x356078u;
label_356078:
    // 0x356078: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35607c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356080: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x356080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x356084: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x356084u;
    {
        const bool branch_taken_0x356084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356084) {
            ctx->pc = 0x3560D4u;
            goto label_3560d4;
        }
    }
    ctx->pc = 0x35608Cu;
label_35608c:
    // 0x35608c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356090: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x356090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x356094: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x356094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x356098: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356098u;
    {
        const bool branch_taken_0x356098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356098) {
            ctx->pc = 0x3560D4u;
            goto label_3560d4;
        }
    }
    ctx->pc = 0x3560A0u;
label_3560a0:
    // 0x3560a0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3560a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3560a4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3560a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3560a8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3560a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3560ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3560ACu;
    {
        const bool branch_taken_0x3560ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560ac) {
            ctx->pc = 0x3560D4u;
            goto label_3560d4;
        }
    }
    ctx->pc = 0x3560B4u;
label_3560b4:
    // 0x3560b4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3560b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3560b8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3560b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3560bc: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3560bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3560c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3560C0u;
    {
        const bool branch_taken_0x3560c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560c0) {
            ctx->pc = 0x3560D4u;
            goto label_3560d4;
        }
    }
    ctx->pc = 0x3560C8u;
label_3560c8:
    // 0x3560c8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3560cc: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3560ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3560d0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3560d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3560d4:
    // 0x3560d4: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3560d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3560d8: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3560D8u;
    SET_GPR_U32(ctx, 31, 0x3560E0u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3560D8u, 0x3560E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560E0u;
label_3560e0:
    // 0x3560e0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3560e4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3560e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560e8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x3560e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3560ec: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3560ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3560f0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3560f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3560f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3560F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3560F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3560FCu;
}
