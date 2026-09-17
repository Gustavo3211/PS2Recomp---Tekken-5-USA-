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

// Function: sub_002111E0
// Address: 0x2111e0 - 0x2112a8
void sub_002111E0_0x2111e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002111E0_0x2111e0");
#endif

    switch (ctx->pc) {
        case 0x211270u: goto label_211270;
        default: break;
    }

    ctx->pc = 0x2111e0u;

    // 0x2111e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2111e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2111e4: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2111e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2111e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2111ec: 0x3404aded  ori         $a0, $zero, 0xADED
    ctx->pc = 0x2111ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44525);
    // 0x2111f0: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x2111f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2111f4: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2111f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2111f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2111fc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2111fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x211200: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x211200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x211204: 0x14440025  bne         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x211204u;
    {
        const bool branch_taken_0x211204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x211208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211204u;
        // 0x211208: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211204) {
            ctx->pc = 0x21129Cu;
            goto label_21129c;
        }
    }
    ctx->pc = 0x21120Cu;
    // 0x21120c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x21120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x211210: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x211210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x211214: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x211214u;
    {
        const bool branch_taken_0x211214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211214u;
        // 0x211218: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211214) {
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x21121Cu;
    // 0x21121c: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x211220: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x211220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x211224: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x211224u;
    {
        const bool branch_taken_0x211224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211224u;
        // 0x211228: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211224) {
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x21122Cu;
    // 0x21122c: 0x84a20080  lh          $v0, 0x80($a1)
    ctx->pc = 0x21122cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x211230: 0x28425000  slti        $v0, $v0, 0x5000
    ctx->pc = 0x211230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20480) ? 1 : 0);
    // 0x211234: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x211234u;
    {
        const bool branch_taken_0x211234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211234u;
        // 0x211238: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211234) {
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x21123Cu;
    // 0x21123c: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x211240: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x211240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x211244: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x211244u;
    {
        const bool branch_taken_0x211244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211244u;
        // 0x211248: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211244) {
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x21124Cu;
    // 0x21124c: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x21124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x211250: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211250u;
    {
        const bool branch_taken_0x211250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211250u;
        // 0x211254: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211250) {
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x211258u;
    // 0x211258: 0x28c20bb8  slti        $v0, $a2, 0xBB8
    ctx->pc = 0x211258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x21125c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21125Cu;
    {
        const bool branch_taken_0x21125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21125c) {
            ctx->pc = 0x211260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21125Cu;
            // 0x211260: 0x28c20fa0  slti        $v0, $a2, 0xFA0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4000) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x211278u;
            goto label_211278;
        }
    }
    ctx->pc = 0x211264u;
    // 0x211264: 0x278498f0  addiu       $a0, $gp, -0x6710
    ctx->pc = 0x211264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940912));
    // 0x211268: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x211268u;
    SET_GPR_U32(ctx, 31, 0x211270u);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x211268u, 0x211270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211270u;
label_211270:
    // 0x211270: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x211270u;
    {
        const bool branch_taken_0x211270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211270u;
        // 0x211274: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211270) {
            ctx->pc = 0x21129Cu;
            goto label_21129c;
        }
    }
    ctx->pc = 0x211278u;
label_211278:
    // 0x211278: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211278u;
    {
        const bool branch_taken_0x211278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211278u;
        // 0x21127c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211278) {
            ctx->pc = 0x21129Cu;
            goto label_21129c;
        }
    }
    ctx->pc = 0x211280u;
    // 0x211280: 0x84a20080  lh          $v0, 0x80($a1)
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x211284: 0x28425000  slti        $v0, $v0, 0x5000
    ctx->pc = 0x211284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20480) ? 1 : 0);
    // 0x211288: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x211288u;
    {
        const bool branch_taken_0x211288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211288) {
            ctx->pc = 0x21128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211288u;
            // 0x21128c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21129Cu;
            goto label_21129c;
        }
    }
    ctx->pc = 0x211290u;
    // 0x211290: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x211294: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x211298: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x211298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_21129c:
    // 0x21129c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21129cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2112A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112A0u;
        // 0x2112a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2112A8u;
}
