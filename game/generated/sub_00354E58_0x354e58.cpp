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

// Function: sub_00354E58
// Address: 0x354e58 - 0x355010
void sub_00354E58_0x354e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354E58_0x354e58");
#endif

    switch (ctx->pc) {
        case 0x354e70u: goto label_354e70;
        case 0x354e8cu: goto label_354e8c;
        case 0x354fc4u: goto label_354fc4;
        case 0x354fd8u: goto label_354fd8;
        case 0x354ff8u: goto label_354ff8;
        default: break;
    }

    ctx->pc = 0x354e58u;

    // 0x354e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354e5c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354e60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354e64: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354e64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e68: 0x0  nop
    ctx->pc = 0x354e68u;
    // NOP
    // 0x354e6c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x354e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_354e70:
    // 0x354e70: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354e74: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x354e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x354e78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354E78u;
    {
        const bool branch_taken_0x354e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354e78) {
            ctx->pc = 0x354E88u;
            goto label_354e88;
        }
    }
    ctx->pc = 0x354E80u;
    // 0x354e80: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x354E80u;
    {
        const bool branch_taken_0x354e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e80) {
            ctx->pc = 0x354FB4u;
            goto label_354fb4;
        }
    }
    ctx->pc = 0x354E88u;
label_354e88:
    // 0x354e88: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x354e88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_354e8c:
    // 0x354e8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354e90: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354E90u;
    {
        const bool branch_taken_0x354e90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x354e90) {
            ctx->pc = 0x354EACu;
            goto label_354eac;
        }
    }
    ctx->pc = 0x354E98u;
    // 0x354e98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354ea0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x354ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x354ea4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x354EA4u;
    {
        const bool branch_taken_0x354ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ea4) {
            ctx->pc = 0x354E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354e70;
        }
    }
    ctx->pc = 0x354EACu;
label_354eac:
    // 0x354eac: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354eb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354eb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ebc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354ec0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354ec4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x354ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354ec8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354ecc: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x354eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x354ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354ed4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x354ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x354ed8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354edc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354ee4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ee8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354eec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354ef0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354ef4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354ef8: 0x2442d744  addiu       $v0, $v0, -0x28BC
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956868));
    // 0x354efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x354f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x354f04: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354f08: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354f10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354f18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354f20: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x354f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x354f24: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354f28: 0x2442d744  addiu       $v0, $v0, -0x28BC
    ctx->pc = 0x354f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956868));
    // 0x354f2c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x354f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f30: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354f34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354f38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354f3c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354f44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354f4c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x354f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x354f50: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354f54: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x354f58: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x354f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f5c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354f60: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354f68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354f70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354f78: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x354f7c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354f80: 0x2442d748  addiu       $v0, $v0, -0x28B8
    ctx->pc = 0x354f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
    // 0x354f84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x354f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f88: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x354f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x354f8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x354f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x354f90: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x354f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x354f94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x354f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x354f98: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x354f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x354f9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x354f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x354fa0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354fa8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x354fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x354fac: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x354FACu;
    {
        const bool branch_taken_0x354fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fac) {
            ctx->pc = 0x354E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354e8c;
        }
    }
    ctx->pc = 0x354FB4u;
label_354fb4:
    // 0x354fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354fb8: 0xaf82c730  sw          $v0, -0x38D0($gp)
    ctx->pc = 0x354fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952752), GPR_U32(ctx, 2));
    // 0x354fbc: 0xc0d4ffe  jal         func_353FF8
    ctx->pc = 0x354FBCu;
    SET_GPR_U32(ctx, 31, 0x354FC4u);
    ctx->pc = 0x353FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353FF8u, 0x354FBCu, 0x354FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FC4u;
label_354fc4:
    // 0x354fc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354fc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x354FC8u;
    {
        const bool branch_taken_0x354fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354fc8) {
            ctx->pc = 0x354FECu;
            goto label_354fec;
        }
    }
    ctx->pc = 0x354FD0u;
    // 0x354fd0: 0xc0d501c  jal         func_354070
    ctx->pc = 0x354FD0u;
    SET_GPR_U32(ctx, 31, 0x354FD8u);
    ctx->pc = 0x354070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354070u, 0x354FD0u, 0x354FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FD8u;
label_354fd8:
    // 0x354fd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354fdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354FDCu;
    {
        const bool branch_taken_0x354fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354fdc) {
            ctx->pc = 0x354FECu;
            goto label_354fec;
        }
    }
    ctx->pc = 0x354FE4u;
    // 0x354fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354FE4u;
    {
        const bool branch_taken_0x354fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fe4) {
            ctx->pc = 0x354FF8u;
            goto label_354ff8;
        }
    }
    ctx->pc = 0x354FECu;
label_354fec:
    // 0x354fec: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x354fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x354ff0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x354FF0u;
    SET_GPR_U32(ctx, 31, 0x354FF8u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x354FF0u, 0x354FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FF8u;
label_354ff8:
    // 0x354ff8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354ff8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ffc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354ffcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355000: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355004: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355008: 0x3e00008  jr          $ra
    ctx->pc = 0x355008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355010u;
}
