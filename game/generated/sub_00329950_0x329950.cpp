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

// Function: sub_00329950
// Address: 0x329950 - 0x3299f0
void sub_00329950_0x329950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329950_0x329950");
#endif

    switch (ctx->pc) {
        case 0x329950u: goto label_329950;
        case 0x329954u: goto label_329954;
        case 0x329958u: goto label_329958;
        case 0x32995cu: goto label_32995c;
        case 0x329960u: goto label_329960;
        case 0x329964u: goto label_329964;
        case 0x329968u: goto label_329968;
        case 0x32996cu: goto label_32996c;
        case 0x329970u: goto label_329970;
        case 0x329974u: goto label_329974;
        case 0x329978u: goto label_329978;
        case 0x32997cu: goto label_32997c;
        case 0x329980u: goto label_329980;
        case 0x329984u: goto label_329984;
        case 0x329988u: goto label_329988;
        case 0x32998cu: goto label_32998c;
        case 0x329990u: goto label_329990;
        case 0x329994u: goto label_329994;
        case 0x329998u: goto label_329998;
        case 0x32999cu: goto label_32999c;
        case 0x3299a0u: goto label_3299a0;
        case 0x3299a4u: goto label_3299a4;
        case 0x3299a8u: goto label_3299a8;
        case 0x3299acu: goto label_3299ac;
        case 0x3299b0u: goto label_3299b0;
        case 0x3299b4u: goto label_3299b4;
        case 0x3299b8u: goto label_3299b8;
        case 0x3299bcu: goto label_3299bc;
        case 0x3299c0u: goto label_3299c0;
        case 0x3299c4u: goto label_3299c4;
        case 0x3299c8u: goto label_3299c8;
        case 0x3299ccu: goto label_3299cc;
        case 0x3299d0u: goto label_3299d0;
        case 0x3299d4u: goto label_3299d4;
        case 0x3299d8u: goto label_3299d8;
        case 0x3299dcu: goto label_3299dc;
        case 0x3299e0u: goto label_3299e0;
        case 0x3299e4u: goto label_3299e4;
        case 0x3299e8u: goto label_3299e8;
        case 0x3299ecu: goto label_3299ec;
        default: break;
    }

    ctx->pc = 0x329950u;

label_329950:
    // 0x329950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_329954:
    // 0x329954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329958:
    // 0x329958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32995c:
    // 0x32995c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329960:
    // 0x329960: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x329960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_329964:
    // 0x329964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_329968:
    // 0x329968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32996c:
    // 0x32996c: 0xe60c0020  swc1        $f12, 0x20($s0)
    ctx->pc = 0x32996cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_329970:
    // 0x329970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329974:
    // 0x329974: 0xe60d0024  swc1        $f13, 0x24($s0)
    ctx->pc = 0x329974u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_329978:
    // 0x329978: 0xe60e0028  swc1        $f14, 0x28($s0)
    ctx->pc = 0x329978u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_32997c:
    // 0x32997c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x32997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_329980:
    // 0x329980: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x329980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_329984:
    // 0x329984: 0xc0cbe4a  jal         func_32F928
label_329988:
    if (ctx->pc == 0x329988u) {
        ctx->pc = 0x329988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329984u;
        // 0x329988: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32998Cu;
        goto label_32998c;
    }
    ctx->pc = 0x329984u;
    SET_GPR_U32(ctx, 31, 0x32998Cu);
    ctx->pc = 0x329988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329984u;
    // 0x329988: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F928u, 0x329984u, 0x32998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32998Cu;
label_32998c:
    // 0x32998c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329990:
    // 0x329990: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_329994:
    if (ctx->pc == 0x329994u) {
        ctx->pc = 0x329994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329990u;
        // 0x329994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329998u;
        goto label_329998;
    }
    ctx->pc = 0x329990u;
    {
        const bool branch_taken_0x329990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329990) {
            ctx->pc = 0x329994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329990u;
            // 0x329994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3299DCu;
            goto label_3299dc;
        }
    }
    ctx->pc = 0x329998u;
label_329998:
    // 0x329998: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32999c:
    // 0x32999c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3299a0:
    // 0x3299a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3299a4:
    // 0x3299a4: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x3299a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3299a8:
    // 0x3299a8: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x3299a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_3299ac:
    // 0x3299ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3299acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3299b0:
    // 0x3299b0: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x3299b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_3299b4:
    // 0x3299b4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3299b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3299b8:
    // 0x3299b8: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x3299b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3299bc:
    // 0x3299bc: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x3299bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3299c0:
    // 0x3299c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3299c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3299c4:
    // 0x3299c4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3299c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_3299c8:
    // 0x3299c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3299c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3299cc:
    // 0x3299cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3299ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3299d0:
    // 0x3299d0: 0x60f809  jalr        $v1
label_3299d4:
    if (ctx->pc == 0x3299D4u) {
        ctx->pc = 0x3299D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299D0u;
        // 0x3299d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299D8u;
        goto label_3299d8;
    }
    ctx->pc = 0x3299D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3299D8u);
        ctx->pc = 0x3299D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299D0u;
        // 0x3299d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3299D0u, 0x3299D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3299D8u;
label_3299d8:
    // 0x3299d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3299d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3299dc:
    // 0x3299dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3299dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3299e0:
    // 0x3299e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3299e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3299e4:
    // 0x3299e4: 0x3e00008  jr          $ra
label_3299e8:
    if (ctx->pc == 0x3299E8u) {
        ctx->pc = 0x3299E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E4u;
        // 0x3299e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299ECu;
        goto label_3299ec;
    }
    ctx->pc = 0x3299E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3299E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E4u;
        // 0x3299e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3299E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3299ECu;
label_3299ec:
    // 0x3299ec: 0x0  nop
    ctx->pc = 0x3299ecu;
    // NOP
    ctx->pc = 0x3299f0u;
}
