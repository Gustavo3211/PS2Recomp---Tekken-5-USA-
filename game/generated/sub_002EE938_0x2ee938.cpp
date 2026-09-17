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

// Function: sub_002EE938
// Address: 0x2ee938 - 0x2ee9c8
void sub_002EE938_0x2ee938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE938_0x2ee938");
#endif

    switch (ctx->pc) {
        case 0x2ee938u: goto label_2ee938;
        case 0x2ee93cu: goto label_2ee93c;
        case 0x2ee940u: goto label_2ee940;
        case 0x2ee944u: goto label_2ee944;
        case 0x2ee948u: goto label_2ee948;
        case 0x2ee94cu: goto label_2ee94c;
        case 0x2ee950u: goto label_2ee950;
        case 0x2ee954u: goto label_2ee954;
        case 0x2ee958u: goto label_2ee958;
        case 0x2ee95cu: goto label_2ee95c;
        case 0x2ee960u: goto label_2ee960;
        case 0x2ee964u: goto label_2ee964;
        case 0x2ee968u: goto label_2ee968;
        case 0x2ee96cu: goto label_2ee96c;
        case 0x2ee970u: goto label_2ee970;
        case 0x2ee974u: goto label_2ee974;
        case 0x2ee978u: goto label_2ee978;
        case 0x2ee97cu: goto label_2ee97c;
        case 0x2ee980u: goto label_2ee980;
        case 0x2ee984u: goto label_2ee984;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee98cu: goto label_2ee98c;
        case 0x2ee990u: goto label_2ee990;
        case 0x2ee994u: goto label_2ee994;
        case 0x2ee998u: goto label_2ee998;
        case 0x2ee99cu: goto label_2ee99c;
        case 0x2ee9a0u: goto label_2ee9a0;
        case 0x2ee9a4u: goto label_2ee9a4;
        case 0x2ee9a8u: goto label_2ee9a8;
        case 0x2ee9acu: goto label_2ee9ac;
        case 0x2ee9b0u: goto label_2ee9b0;
        case 0x2ee9b4u: goto label_2ee9b4;
        case 0x2ee9b8u: goto label_2ee9b8;
        case 0x2ee9bcu: goto label_2ee9bc;
        case 0x2ee9c0u: goto label_2ee9c0;
        case 0x2ee9c4u: goto label_2ee9c4;
        default: break;
    }

    ctx->pc = 0x2ee938u;

label_2ee938:
    // 0x2ee938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ee93c:
    // 0x2ee93c: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2ee93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
label_2ee940:
    // 0x2ee940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ee944:
    // 0x2ee944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ee948:
    // 0x2ee948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ee94c:
    if (ctx->pc == 0x2EE94Cu) {
        ctx->pc = 0x2EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE948u;
        // 0x2ee94c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE950u;
        goto label_2ee950;
    }
    ctx->pc = 0x2EE948u;
    {
        const bool branch_taken_0x2ee948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE948u;
        // 0x2ee94c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee948) {
            ctx->pc = 0x2EE960u;
            goto label_2ee960;
        }
    }
    ctx->pc = 0x2EE950u;
label_2ee950:
    // 0x2ee950: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ee954:
    // 0x2ee954: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ee958:
    // 0x2ee958: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ee95c:
    if (ctx->pc == 0x2EE95Cu) {
        ctx->pc = 0x2EE960u;
        goto label_2ee960;
    }
    ctx->pc = 0x2EE958u;
    {
        const bool branch_taken_0x2ee958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee958) {
            ctx->pc = 0x2EE96Cu;
            goto label_2ee96c;
        }
    }
    ctx->pc = 0x2EE960u;
label_2ee960:
    // 0x2ee960: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ee964:
    // 0x2ee964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee968:
    // 0x2ee968: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ee96c:
    // 0x2ee96c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2ee970:
    if (ctx->pc == 0x2EE970u) {
        ctx->pc = 0x2EE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE96Cu;
        // 0x2ee970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE974u;
        goto label_2ee974;
    }
    ctx->pc = 0x2EE96Cu;
    {
        const bool branch_taken_0x2ee96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE96Cu;
        // 0x2ee970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee96c) {
            ctx->pc = 0x2EE9BCu;
            goto label_2ee9bc;
        }
    }
    ctx->pc = 0x2EE974u;
label_2ee974:
    // 0x2ee974: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ee974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ee978:
    // 0x2ee978: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ee97c:
    if (ctx->pc == 0x2EE97Cu) {
        ctx->pc = 0x2EE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE978u;
        // 0x2ee97c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE980u;
        goto label_2ee980;
    }
    ctx->pc = 0x2EE978u;
    {
        const bool branch_taken_0x2ee978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee978) {
            ctx->pc = 0x2EE97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE978u;
            // 0x2ee97c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE994u;
            goto label_2ee994;
        }
    }
    ctx->pc = 0x2EE980u;
label_2ee980:
    // 0x2ee980: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ee980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ee984:
    // 0x2ee984: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ee988:
    // 0x2ee988: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ee98c:
    if (ctx->pc == 0x2EE98Cu) {
        ctx->pc = 0x2EE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE988u;
        // 0x2ee98c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE990u;
        goto label_2ee990;
    }
    ctx->pc = 0x2EE988u;
    {
        const bool branch_taken_0x2ee988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE988u;
        // 0x2ee98c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee988) {
            ctx->pc = 0x2EE99Cu;
            goto label_2ee99c;
        }
    }
    ctx->pc = 0x2EE990u;
label_2ee990:
    // 0x2ee990: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ee994:
    // 0x2ee994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee998:
    // 0x2ee998: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ee99c:
    // 0x2ee99c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ee99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ee9a0:
    // 0x2ee9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee9a4:
    // 0x2ee9a4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2ee9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2ee9a8:
    // 0x2ee9a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee9ac:
    // 0x2ee9ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee9b0:
    // 0x2ee9b0: 0x60f809  jalr        $v1
label_2ee9b4:
    if (ctx->pc == 0x2EE9B4u) {
        ctx->pc = 0x2EE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B0u;
        // 0x2ee9b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9B8u;
        goto label_2ee9b8;
    }
    ctx->pc = 0x2EE9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE9B8u);
        ctx->pc = 0x2EE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B0u;
        // 0x2ee9b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE9B0u, 0x2EE9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE9B8u;
label_2ee9b8:
    // 0x2ee9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee9bc:
    // 0x2ee9bc: 0x3e00008  jr          $ra
label_2ee9c0:
    if (ctx->pc == 0x2EE9C0u) {
        ctx->pc = 0x2EE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9BCu;
        // 0x2ee9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9C4u;
        goto label_2ee9c4;
    }
    ctx->pc = 0x2EE9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9BCu;
        // 0x2ee9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE9C4u;
label_2ee9c4:
    // 0x2ee9c4: 0x0  nop
    ctx->pc = 0x2ee9c4u;
    // NOP
    ctx->pc = 0x2ee9c8u;
}
