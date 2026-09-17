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

// Function: sub_00357B8C
// Address: 0x357b8c - 0x357cd0
void sub_00357B8C_0x357b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357B8C_0x357b8c");
#endif

    switch (ctx->pc) {
        case 0x357bb0u: goto label_357bb0;
        case 0x357bdcu: goto label_357bdc;
        case 0x357becu: goto label_357bec;
        case 0x357c00u: goto label_357c00;
        case 0x357c50u: goto label_357c50;
        case 0x357cb4u: goto label_357cb4;
        default: break;
    }

    ctx->pc = 0x357b8cu;

    // 0x357b8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357b90: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x357b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x357b94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x357b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x357b98: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x357b98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b9c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x357b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x357ba0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x357ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x357ba4: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357ba8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x357BA8u;
    SET_GPR_U32(ctx, 31, 0x357BB0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x357BA8u, 0x357BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BB0u;
label_357bb0:
    // 0x357bb0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x357bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357bb4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x357bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357bb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357bbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x357bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x357bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x357bc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x357bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357bc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x357bcc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x357bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x357bd0: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x357bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x357bd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x357bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357bd8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x357bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_357bdc:
    // 0x357bdc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357be0: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x357be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357be4: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x357BE4u;
    SET_GPR_U32(ctx, 31, 0x357BECu);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x357BE4u, 0x357BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BECu;
label_357bec:
    // 0x357bec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357BECu;
    {
        const bool branch_taken_0x357bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357bec) {
            ctx->pc = 0x357BFCu;
            goto label_357bfc;
        }
    }
    ctx->pc = 0x357BF4u;
    // 0x357bf4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x357BF4u;
    {
        const bool branch_taken_0x357bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357bf4) {
            ctx->pc = 0x357C34u;
            goto label_357c34;
        }
    }
    ctx->pc = 0x357BFCu;
label_357bfc:
    // 0x357bfc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x357bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_357c00:
    // 0x357c00: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357c04: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x357c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x357c08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x357c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x357c0c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x357c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357C10u;
    {
        const bool branch_taken_0x357c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c10) {
            ctx->pc = 0x357C20u;
            goto label_357c20;
        }
    }
    ctx->pc = 0x357C18u;
    // 0x357c18: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x357C18u;
    {
        const bool branch_taken_0x357c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c18) {
            ctx->pc = 0x357BDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357bdc;
        }
    }
    ctx->pc = 0x357C20u;
label_357c20:
    // 0x357c20: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357c28: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x357c28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x357c2c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x357C2Cu;
    {
        const bool branch_taken_0x357c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c2c) {
            ctx->pc = 0x357C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357c00;
        }
    }
    ctx->pc = 0x357C34u;
label_357c34:
    // 0x357c34: 0x27c2000c  addiu       $v0, $fp, 0xC
    ctx->pc = 0x357c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x357c38: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x357c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x357c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c44: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x357c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c48: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x357C48u;
    SET_GPR_U32(ctx, 31, 0x357C50u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x357C48u, 0x357C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C50u;
label_357c50:
    // 0x357c50: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x357c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x357c54: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x357c54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x357c58: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x357c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x357c5c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x357c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357c60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x357C60u;
    {
        const bool branch_taken_0x357c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357c60) {
            ctx->pc = 0x357C88u;
            goto label_357c88;
        }
    }
    ctx->pc = 0x357C68u;
    // 0x357c68: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x357c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357C6Cu;
    {
        const bool branch_taken_0x357c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c6c) {
            ctx->pc = 0x357C7Cu;
            goto label_357c7c;
        }
    }
    ctx->pc = 0x357C74u;
    // 0x357c74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x357C74u;
    {
        const bool branch_taken_0x357c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c74) {
            ctx->pc = 0x357C9Cu;
            goto label_357c9c;
        }
    }
    ctx->pc = 0x357C7Cu;
label_357c7c:
    // 0x357c7c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x357c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x357c80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x357C80u;
    {
        const bool branch_taken_0x357c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c80) {
            ctx->pc = 0x357CA8u;
            goto label_357ca8;
        }
    }
    ctx->pc = 0x357C88u;
label_357c88:
    // 0x357c88: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357c8c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x357c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x357c90: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x357c90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x357c94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357C94u;
    {
        const bool branch_taken_0x357c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c94) {
            ctx->pc = 0x357CA8u;
            goto label_357ca8;
        }
    }
    ctx->pc = 0x357C9Cu;
label_357c9c:
    // 0x357c9c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357ca0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357ca4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x357ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_357ca8:
    // 0x357ca8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357cac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357CACu;
    SET_GPR_U32(ctx, 31, 0x357CB4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357CACu, 0x357CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CB4u;
label_357cb4:
    // 0x357cb4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357cb8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357cb8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cbc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x357cbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x357cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357cc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x357CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357CD0u;
}
