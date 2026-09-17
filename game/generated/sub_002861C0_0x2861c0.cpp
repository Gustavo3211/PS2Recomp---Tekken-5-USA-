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

// Function: sub_002861C0
// Address: 0x2861c0 - 0x2862b8
void sub_002861C0_0x2861c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002861C0_0x2861c0");
#endif

    switch (ctx->pc) {
        case 0x28620cu: goto label_28620c;
        case 0x286220u: goto label_286220;
        case 0x286260u: goto label_286260;
        case 0x286278u: goto label_286278;
        case 0x2862a0u: goto label_2862a0;
        default: break;
    }

    ctx->pc = 0x2861c0u;

    // 0x2861c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2861c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2861c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2861c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2861c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2861ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2861d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2861d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2861d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2861d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2861d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2861D8u;
    {
        const bool branch_taken_0x2861d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861D8u;
        // 0x2861dc: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2861d8) {
            ctx->pc = 0x286228u;
            goto label_286228;
        }
    }
    ctx->pc = 0x2861E0u;
    // 0x2861e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2861e4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2861e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2861e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2861e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2861ec: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2861ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2861f0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2861f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2861f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2861f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2861f8: 0x24a55ee0  addiu       $a1, $a1, 0x5EE0
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24288));
    // 0x2861fc: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x2861fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x286200: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286204: 0xc0d468c  jal         func_351A30
    ctx->pc = 0x286204u;
    SET_GPR_U32(ctx, 31, 0x28620Cu);
    ctx->pc = 0x286208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286204u;
    // 0x286208: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351A30u, 0x286204u, 0x28620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28620Cu;
label_28620c:
    // 0x28620c: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28620Cu;
    {
        const bool branch_taken_0x28620c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28620Cu;
        // 0x286210: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28620c) {
            ctx->pc = 0x2862A0u;
            goto label_2862a0;
        }
    }
    ctx->pc = 0x286214u;
    // 0x286214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286218: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286218u;
    SET_GPR_U32(ctx, 31, 0x286220u);
    ctx->pc = 0x28621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286218u;
    // 0x28621c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286218u, 0x286220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286220u;
label_286220:
    // 0x286220: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x286220u;
    {
        const bool branch_taken_0x286220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286220u;
        // 0x286224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286220) {
            ctx->pc = 0x2862A4u;
            goto label_2862a4;
        }
    }
    ctx->pc = 0x286228u;
label_286228:
    // 0x286228: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28622c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x28622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x286230: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286234: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286234u;
    {
        const bool branch_taken_0x286234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286234u;
        // 0x286238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286234) {
            ctx->pc = 0x2862A0u;
            goto label_2862a0;
        }
    }
    ctx->pc = 0x28623Cu;
    // 0x28623c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28623Cu;
    {
        const bool branch_taken_0x28623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28623Cu;
        // 0x286240: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28623c) {
            ctx->pc = 0x286254u;
            goto label_286254;
        }
    }
    ctx->pc = 0x286244u;
    // 0x286244: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286244u;
    {
        const bool branch_taken_0x286244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286244u;
        // 0x286248: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286244) {
            ctx->pc = 0x286254u;
            goto label_286254;
        }
    }
    ctx->pc = 0x28624Cu;
    // 0x28624c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28624Cu;
    {
        const bool branch_taken_0x28624c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28624Cu;
        // 0x286250: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28624c) {
            ctx->pc = 0x286268u;
            goto label_286268;
        }
    }
    ctx->pc = 0x286254u;
label_286254:
    // 0x286254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286258: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286258u;
    SET_GPR_U32(ctx, 31, 0x286260u);
    ctx->pc = 0x28625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286258u;
    // 0x28625c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286258u, 0x286260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286260u;
label_286260:
    // 0x286260: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x286260u;
    {
        const bool branch_taken_0x286260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286260u;
        // 0x286264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286260) {
            ctx->pc = 0x2862A4u;
            goto label_2862a4;
        }
    }
    ctx->pc = 0x286268u;
label_286268:
    // 0x286268: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286268u;
    {
        const bool branch_taken_0x286268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x286268) {
            ctx->pc = 0x286280u;
            goto label_286280;
        }
    }
    ctx->pc = 0x286270u;
    // 0x286270: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286270u;
    SET_GPR_U32(ctx, 31, 0x286278u);
    ctx->pc = 0x286274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286270u;
    // 0x286274: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286270u, 0x286278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286278u;
label_286278:
    // 0x286278: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x286278u;
    {
        const bool branch_taken_0x286278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286278u;
        // 0x28627c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286278) {
            ctx->pc = 0x2862A4u;
            goto label_2862a4;
        }
    }
    ctx->pc = 0x286280u;
label_286280:
    // 0x286280: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286280u;
    {
        const bool branch_taken_0x286280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286280u;
        // 0x286284: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286280) {
            ctx->pc = 0x286298u;
            goto label_286298;
        }
    }
    ctx->pc = 0x286288u;
    // 0x286288: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28628c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286290: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x286294: 0xac23b300  sw          $v1, -0x4D00($at)
    ctx->pc = 0x286294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947584), GPR_U32(ctx, 3));
label_286298:
    // 0x286298: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286298u;
    SET_GPR_U32(ctx, 31, 0x2862A0u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286298u, 0x2862A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862A0u;
label_2862a0:
    // 0x2862a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2862a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2862a4:
    // 0x2862a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2862a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2862a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2862a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2862ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2862ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ACu;
        // 0x2862b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2862ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2862B4u;
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
    ctx->pc = 0x2862b8u;
}
