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

// Function: sub_0026D248
// Address: 0x26d248 - 0x26d310
void sub_0026D248_0x26d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D248_0x26d248");
#endif

    switch (ctx->pc) {
        case 0x26d270u: goto label_26d270;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f8u: goto label_26d2f8;
        default: break;
    }

    ctx->pc = 0x26d248u;

    // 0x26d248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d24c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d25c: 0x8c7000a8  lw          $s0, 0xA8($v1)
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x26d260: 0x1a000026  blez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26D260u;
    {
        const bool branch_taken_0x26d260 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x26D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D260u;
        // 0x26d264: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d260) {
            ctx->pc = 0x26D2FCu;
            goto label_26d2fc;
        }
    }
    ctx->pc = 0x26D268u;
    // 0x26d268: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D268u;
    SET_GPR_U32(ctx, 31, 0x26D270u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D268u, 0x26D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D270u;
label_26d270:
    // 0x26d270: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x26d270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x26d274: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x26d278: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x26d278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26d27c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d280: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d284: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26d288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d28c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x26d28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d290: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26d294: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x26d294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x26d298: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26d29c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26d29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26d2a0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26d2a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26d2a4: 0xc09b45e  jal         func_26D178
    ctx->pc = 0x26D2A4u;
    SET_GPR_U32(ctx, 31, 0x26D2ACu);
    ctx->pc = 0x26D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2A4u;
    // 0x26d2a8: 0x223c3  sra         $a0, $v0, 15 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D178u, 0x26D2A4u, 0x26D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2ACu;
label_26d2ac:
    // 0x26d2ac: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x26d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x26d2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d2b8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x26d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x26d2bc: 0x2484f718  addiu       $a0, $a0, -0x8E8
    ctx->pc = 0x26d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965016));
    // 0x26d2c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d2c4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x26d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x26d2c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26d2cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26d2d0: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x26D2D0u;
    {
        const bool branch_taken_0x26d2d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x26D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2D0u;
        // 0x26d2d4: 0x658821  addu        $s1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2d0) {
            ctx->pc = 0x26D2FCu;
            goto label_26d2fc;
        }
    }
    ctx->pc = 0x26D2D8u;
    // 0x26d2d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26d2dc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x26d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d2e0: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x26d2e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x26d2e4: 0xc09981c  jal         func_266070
    ctx->pc = 0x26D2E4u;
    SET_GPR_U32(ctx, 31, 0x26D2ECu);
    ctx->pc = 0x26D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2E4u;
    // 0x26d2e8: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x26D2E4u, 0x26D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2ECu;
label_26d2ec:
    // 0x26d2ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d2f0: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x26D2F0u;
    SET_GPR_U32(ctx, 31, 0x26D2F8u);
    ctx->pc = 0x26D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2F0u;
    // 0x26d2f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x26D2F0u, 0x26D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2F8u;
label_26d2f8:
    // 0x26d2f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26d2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d2fc:
    // 0x26d2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26d300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d308: 0x3e00008  jr          $ra
    ctx->pc = 0x26D308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D308u;
        // 0x26d30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D310u;
}
