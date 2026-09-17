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

// Function: sub_00324910
// Address: 0x324910 - 0x3249d0
void sub_00324910_0x324910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324910_0x324910");
#endif

    switch (ctx->pc) {
        case 0x324910u: goto label_324910;
        case 0x324914u: goto label_324914;
        case 0x324918u: goto label_324918;
        case 0x32491cu: goto label_32491c;
        case 0x324920u: goto label_324920;
        case 0x324924u: goto label_324924;
        case 0x324928u: goto label_324928;
        case 0x32492cu: goto label_32492c;
        case 0x324930u: goto label_324930;
        case 0x324934u: goto label_324934;
        case 0x324938u: goto label_324938;
        case 0x32493cu: goto label_32493c;
        case 0x324940u: goto label_324940;
        case 0x324944u: goto label_324944;
        case 0x324948u: goto label_324948;
        case 0x32494cu: goto label_32494c;
        case 0x324950u: goto label_324950;
        case 0x324954u: goto label_324954;
        case 0x324958u: goto label_324958;
        case 0x32495cu: goto label_32495c;
        case 0x324960u: goto label_324960;
        case 0x324964u: goto label_324964;
        case 0x324968u: goto label_324968;
        case 0x32496cu: goto label_32496c;
        case 0x324970u: goto label_324970;
        case 0x324974u: goto label_324974;
        case 0x324978u: goto label_324978;
        case 0x32497cu: goto label_32497c;
        case 0x324980u: goto label_324980;
        case 0x324984u: goto label_324984;
        case 0x324988u: goto label_324988;
        case 0x32498cu: goto label_32498c;
        case 0x324990u: goto label_324990;
        case 0x324994u: goto label_324994;
        case 0x324998u: goto label_324998;
        case 0x32499cu: goto label_32499c;
        case 0x3249a0u: goto label_3249a0;
        case 0x3249a4u: goto label_3249a4;
        case 0x3249a8u: goto label_3249a8;
        case 0x3249acu: goto label_3249ac;
        case 0x3249b0u: goto label_3249b0;
        case 0x3249b4u: goto label_3249b4;
        case 0x3249b8u: goto label_3249b8;
        case 0x3249bcu: goto label_3249bc;
        case 0x3249c0u: goto label_3249c0;
        case 0x3249c4u: goto label_3249c4;
        case 0x3249c8u: goto label_3249c8;
        case 0x3249ccu: goto label_3249cc;
        default: break;
    }

    ctx->pc = 0x324910u;

label_324910:
    // 0x324910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_324914:
    // 0x324914: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x324914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_324918:
    // 0x324918: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x324918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_32491c:
    // 0x32491c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x32491cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_324920:
    // 0x324920: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x324920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_324924:
    // 0x324924: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x324924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_324928:
    // 0x324928: 0x24421e08  addiu       $v0, $v0, 0x1E08
    ctx->pc = 0x324928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7688));
label_32492c:
    // 0x32492c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x32492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_324930:
    // 0x324930: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x324930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_324934:
    // 0x324934: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x324934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_324938:
    // 0x324938: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x324938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32493c:
    // 0x32493c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x32493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_324940:
    // 0x324940: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x324940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_324944:
    // 0x324944: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x324944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_324948:
    // 0x324948: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32494c:
    // 0x32494c: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x32494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324950:
    // 0x324950: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324954:
    // 0x324954: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_324958:
    // 0x324958: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32495c:
    // 0x32495c: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x32495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_324960:
    // 0x324960: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324964:
    // 0x324964: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x324964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_324968:
    // 0x324968: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x324968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_32496c:
    // 0x32496c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324970:
    // 0x324970: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_324974:
    if (ctx->pc == 0x324974u) {
        ctx->pc = 0x324974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324970u;
        // 0x324974: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324978u;
        goto label_324978;
    }
    ctx->pc = 0x324970u;
    {
        const bool branch_taken_0x324970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x324974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324970u;
        // 0x324974: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324970) {
            ctx->pc = 0x3249B4u;
            goto label_3249b4;
        }
    }
    ctx->pc = 0x324978u;
label_324978:
    // 0x324978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32497c:
    // 0x32497c: 0x0  nop
    ctx->pc = 0x32497cu;
    // NOP
label_324980:
    // 0x324980: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x324980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324984:
    // 0x324984: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x324984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_324988:
    // 0x324988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x324988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32498c:
    // 0x32498c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324990:
    // 0x324990: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x324990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_324994:
    // 0x324994: 0x60f809  jalr        $v1
label_324998:
    if (ctx->pc == 0x324998u) {
        ctx->pc = 0x324998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324994u;
        // 0x324998: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32499Cu;
        goto label_32499c;
    }
    ctx->pc = 0x324994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32499Cu);
        ctx->pc = 0x324998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324994u;
        // 0x324998: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324994u, 0x32499Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32499Cu;
label_32499c:
    // 0x32499c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3249a0:
    // 0x3249a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3249a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3249a4:
    // 0x3249a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3249a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3249a8:
    // 0x3249a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3249a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3249ac:
    // 0x3249ac: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_3249b0:
    if (ctx->pc == 0x3249B0u) {
        ctx->pc = 0x3249B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249ACu;
        // 0x3249b0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249B4u;
        goto label_3249b4;
    }
    ctx->pc = 0x3249ACu;
    {
        const bool branch_taken_0x3249ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3249ac) {
            ctx->pc = 0x3249B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3249ACu;
            // 0x3249b0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324980;
        }
    }
    ctx->pc = 0x3249B4u;
label_3249b4:
    // 0x3249b4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3249b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3249b8:
    // 0x3249b8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3249b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3249bc:
    // 0x3249bc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3249bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3249c0:
    // 0x3249c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3249c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3249c4:
    // 0x3249c4: 0x3e00008  jr          $ra
label_3249c8:
    if (ctx->pc == 0x3249C8u) {
        ctx->pc = 0x3249C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249C4u;
        // 0x3249c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249CCu;
        goto label_3249cc;
    }
    ctx->pc = 0x3249C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3249C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249C4u;
        // 0x3249c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3249C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3249CCu;
label_3249cc:
    // 0x3249cc: 0x0  nop
    ctx->pc = 0x3249ccu;
    // NOP
    ctx->pc = 0x3249d0u;
}
