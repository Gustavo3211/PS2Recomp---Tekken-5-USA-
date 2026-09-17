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

// Function: sub_0025DE80
// Address: 0x25de80 - 0x25df50
void sub_0025DE80_0x25de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE80_0x25de80");
#endif

    switch (ctx->pc) {
        case 0x25dee8u: goto label_25dee8;
        case 0x25df14u: goto label_25df14;
        default: break;
    }

    ctx->pc = 0x25de80u;

    // 0x25de80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25de84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25de88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25de88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25de90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25de94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25de98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25de9c: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x25de9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25dea0: 0x86240042  lh          $a0, 0x42($s1)
    ctx->pc = 0x25dea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x25dea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25dea8: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x25dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25deac: 0x8c63ca20  lw          $v1, -0x35E0($v1)
    ctx->pc = 0x25deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953504)));
    // 0x25deb0: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25DEB0u;
    {
        const bool branch_taken_0x25deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x25DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB0u;
        // 0x25deb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deb0) {
            ctx->pc = 0x25DF38u;
            goto label_25df38;
        }
    }
    ctx->pc = 0x25DEB8u;
    // 0x25deb8: 0x96220824  lhu         $v0, 0x824($s1)
    ctx->pc = 0x25deb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
    // 0x25debc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x25debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x25dec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DEC0u;
    {
        const bool branch_taken_0x25dec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEC0u;
        // 0x25dec4: 0x26230818  addiu       $v1, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dec0) {
            ctx->pc = 0x25DED0u;
            goto label_25ded0;
        }
    }
    ctx->pc = 0x25DEC8u;
    // 0x25dec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DEC8u;
    {
        const bool branch_taken_0x25dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEC8u;
        // 0x25decc: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dec8) {
            ctx->pc = 0x25DED4u;
            goto label_25ded4;
        }
    }
    ctx->pc = 0x25DED0u;
label_25ded0:
    // 0x25ded0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x25ded0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ded4:
    // 0x25ded4: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x25ded4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ded8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25ded8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dedc: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x25dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x25dee0: 0x8c53004c  lw          $s3, 0x4C($v0)
    ctx->pc = 0x25dee0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x25dee4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25dee8:
    // 0x25dee8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x25dee8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25deec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25deecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25def0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25def0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25def4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25def4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25def8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25def8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25defc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25defcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df00: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x25df00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25df04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25df08: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x25df0c: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25DF0Cu;
    SET_GPR_U32(ctx, 31, 0x25DF14u);
    ctx->pc = 0x25DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF0Cu;
    // 0x25df10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25DF0Cu, 0x25DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF14u;
label_25df14:
    // 0x25df14: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x25df14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25df18: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x25DF18u;
    {
        const bool branch_taken_0x25df18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25df18) {
            ctx->pc = 0x25DF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DF18u;
            // 0x25df1c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dee8;
        }
    }
    ctx->pc = 0x25DF20u;
    // 0x25df20: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x25df20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25df24: 0x86230042  lh          $v1, 0x42($s1)
    ctx->pc = 0x25df24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x25df28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25df2c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x25df2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25df30: 0xac23ca20  sw          $v1, -0x35E0($at)
    ctx->pc = 0x25df30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953504), GPR_U32(ctx, 3));
    // 0x25df34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25df34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25df38:
    // 0x25df38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25df38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25df3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25df3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25df40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25df40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25df44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25df44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25df48: 0x3e00008  jr          $ra
    ctx->pc = 0x25DF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF48u;
        // 0x25df4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DF50u;
}
