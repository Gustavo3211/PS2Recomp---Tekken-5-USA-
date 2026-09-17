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

// Function: sub_003721F0
// Address: 0x3721f0 - 0x3722a0
void sub_003721F0_0x3721f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003721F0_0x3721f0");
#endif

    switch (ctx->pc) {
        case 0x372224u: goto label_372224;
        case 0x372274u: goto label_372274;
        case 0x372290u: goto label_372290;
        default: break;
    }

    ctx->pc = 0x3721f0u;

    // 0x3721f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3721f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3721f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3721f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3721f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3721f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3721fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3721fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x372200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x372204: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x372204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x372208: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x372208u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37220c: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37220Cu;
    {
        const bool branch_taken_0x37220c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x372210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37220Cu;
        // 0x372210: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37220c) {
            ctx->pc = 0x372260u;
            goto label_372260;
        }
    }
    ctx->pc = 0x372214u;
    // 0x372214: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x372214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x372218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37221c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x37221Cu;
    SET_GPR_U32(ctx, 31, 0x372224u);
    ctx->pc = 0x372220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37221Cu;
    // 0x372220: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x37221Cu, 0x372224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372224u;
label_372224:
    // 0x372224: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x372224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x372228: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x372228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37222c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37222Cu;
    {
        const bool branch_taken_0x37222c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37222c) {
            ctx->pc = 0x372230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37222Cu;
            // 0x372230: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372248u;
            goto label_372248;
        }
    }
    ctx->pc = 0x372234u;
    // 0x372234: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x372234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x372238: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x372238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37223c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37223Cu;
    {
        const bool branch_taken_0x37223c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x372240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37223Cu;
        // 0x372240: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37223c) {
            ctx->pc = 0x372254u;
            goto label_372254;
        }
    }
    ctx->pc = 0x372244u;
    // 0x372244: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x372244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_372248:
    // 0x372248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x372248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37224c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x37224cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x372250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_372254:
    // 0x372254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372258: 0x80a165a  j           func_285968
    ctx->pc = 0x372258u;
    ctx->pc = 0x37225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372258u;
    // 0x37225c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285968u;
    sub_00285968_0x285968(rdram, ctx, runtime); return;
    ctx->pc = 0x372260u;
label_372260:
    // 0x372260: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x372260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x372264: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x372264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x372268: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x37226c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x37226Cu;
    SET_GPR_U32(ctx, 31, 0x372274u);
    ctx->pc = 0x372270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37226Cu;
    // 0x372270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x37226Cu, 0x372274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372274u;
label_372274:
    // 0x372274: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x372274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x372278: 0x8c65f5e4  lw          $a1, -0xA1C($v1)
    ctx->pc = 0x372278u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EF5E4u));
    // 0x37227c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372280: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x372280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x372284: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x372284u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x372288: 0xc0b7692  jal         func_2DDA48
    ctx->pc = 0x372288u;
    SET_GPR_U32(ctx, 31, 0x372290u);
    ctx->pc = 0x37228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372288u;
    // 0x37228c: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA48u, 0x372288u, 0x372290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372290u;
label_372290:
    // 0x372290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372294: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372298: 0x3e00008  jr          $ra
    ctx->pc = 0x372298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372298u;
        // 0x37229c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3722A0u;
}
