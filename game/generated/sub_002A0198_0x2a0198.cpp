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

// Function: sub_002A0198
// Address: 0x2a0198 - 0x2a02a0
void sub_002A0198_0x2a0198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0198_0x2a0198");
#endif

    switch (ctx->pc) {
        case 0x2a01e0u: goto label_2a01e0;
        case 0x2a01f0u: goto label_2a01f0;
        case 0x2a0210u: goto label_2a0210;
        case 0x2a0220u: goto label_2a0220;
        case 0x2a0234u: goto label_2a0234;
        case 0x2a0248u: goto label_2a0248;
        case 0x2a026cu: goto label_2a026c;
        default: break;
    }

    ctx->pc = 0x2a0198u;

    // 0x2a0198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a019c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a019cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a01a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a01a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a01a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a01a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01a8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a01b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a01b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a01b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a01b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a01bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a01c0: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x2a01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
    // 0x2a01c4: 0xae250050  sw          $a1, 0x50($s1)
    ctx->pc = 0x2a01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 5));
    // 0x2a01c8: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A01C8u;
    {
        const bool branch_taken_0x2a01c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01C8u;
        // 0x2a01cc: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01c8) {
            ctx->pc = 0x2A0200u;
            goto label_2a0200;
        }
    }
    ctx->pc = 0x2A01D0u;
    // 0x2a01d0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a01d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a01d4: 0x2610cab8  addiu       $s0, $s0, -0x3548
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953656));
    // 0x2a01d8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A01D8u;
    SET_GPR_U32(ctx, 31, 0x2A01E0u);
    ctx->pc = 0x2A01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01D8u;
    // 0x2a01dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A01D8u, 0x2A01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01E0u;
label_2a01e0:
    // 0x2a01e0: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a01e4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2a01e8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A01E8u;
    SET_GPR_U32(ctx, 31, 0x2A01F0u);
    ctx->pc = 0x2A01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01E8u;
    // 0x2a01ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A01E8u, 0x2A01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01F0u;
label_2a01f0:
    // 0x2a01f0: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2a01f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a01f4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2a01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x2a01f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A01F8u;
    {
        const bool branch_taken_0x2a01f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01F8u;
        // 0x2a01fc: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01f8) {
            ctx->pc = 0x2A022Cu;
            goto label_2a022c;
        }
    }
    ctx->pc = 0x2A0200u;
label_2a0200:
    // 0x2a0200: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a0200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a0204: 0x2610cab8  addiu       $s0, $s0, -0x3548
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953656));
    // 0x2a0208: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0208u;
    SET_GPR_U32(ctx, 31, 0x2A0210u);
    ctx->pc = 0x2A020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0208u;
    // 0x2a020c: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0208u, 0x2A0210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0210u;
label_2a0210:
    // 0x2a0210: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2a0210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a0214: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a0214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2a0218: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0218u;
    SET_GPR_U32(ctx, 31, 0x2A0220u);
    ctx->pc = 0x2A021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0218u;
    // 0x2a021c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0218u, 0x2A0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0220u;
label_2a0220:
    // 0x2a0220: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a0224: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2a0224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x2a0228: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2a0228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2a022c:
    // 0x2a022c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A022Cu;
    SET_GPR_U32(ctx, 31, 0x2A0234u);
    ctx->pc = 0x2A0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A022Cu;
    // 0x2a0230: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A022Cu, 0x2A0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0234u;
label_2a0234:
    // 0x2a0234: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2a0234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2a0238: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a023c: 0x2454cab8  addiu       $s4, $v0, -0x3548
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953656));
    // 0x2a0240: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a0244: 0x0  nop
    ctx->pc = 0x2a0244u;
    // NOP
label_2a0248:
    // 0x2a0248: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2a0248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a024c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2a024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a0250: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a0254: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2a0254u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a0258: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a025c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2a025cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a0260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a0260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a0264: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0264u;
    SET_GPR_U32(ctx, 31, 0x2A026Cu);
    ctx->pc = 0x2A0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0264u;
    // 0x2a0268: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0264u, 0x2A026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A026Cu;
label_2a026c:
    // 0x2a026c: 0x2a44000a  slti        $a0, $s2, 0xA
    ctx->pc = 0x2a026cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0270: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a0274: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0274u;
    {
        const bool branch_taken_0x2a0274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0274u;
        // 0x2a0278: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0274) {
            ctx->pc = 0x2A0248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0248;
        }
    }
    ctx->pc = 0x2A027Cu;
    // 0x2a027c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a027cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a0284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a028c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a028cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0290: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a0294: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0294u;
        // 0x2a0298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A029Cu;
    // 0x2a029c: 0x0  nop
    ctx->pc = 0x2a029cu;
    // NOP
    ctx->pc = 0x2a02a0u;
}
