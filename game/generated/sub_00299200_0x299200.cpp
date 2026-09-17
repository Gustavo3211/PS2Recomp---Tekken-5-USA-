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

// Function: sub_00299200
// Address: 0x299200 - 0x2992e8
void sub_00299200_0x299200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299200_0x299200");
#endif

    switch (ctx->pc) {
        case 0x299234u: goto label_299234;
        case 0x299240u: goto label_299240;
        case 0x299260u: goto label_299260;
        case 0x299270u: goto label_299270;
        case 0x299280u: goto label_299280;
        case 0x299298u: goto label_299298;
        case 0x2992c8u: goto label_2992c8;
        default: break;
    }

    ctx->pc = 0x299200u;

    // 0x299200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x299200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x299204: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x299204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x299208: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x299208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x29920c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x29920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x299210: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x299210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x299214: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x299214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299218: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x299218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x29921c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29921cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299220: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x299220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x299224: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x299224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x299228: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x299228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x29922c: 0xc0b2346  jal         func_2C8D18
    ctx->pc = 0x29922Cu;
    SET_GPR_U32(ctx, 31, 0x299234u);
    ctx->pc = 0x299230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29922Cu;
    // 0x299230: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8D18u, 0x29922Cu, 0x299234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299234u;
label_299234:
    // 0x299234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299238: 0xc0a6432  jal         func_2990C8
    ctx->pc = 0x299238u;
    SET_GPR_U32(ctx, 31, 0x299240u);
    ctx->pc = 0x29923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299238u;
    // 0x29923c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2990C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2990C8u, 0x299238u, 0x299240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299240u;
label_299240:
    // 0x299240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299244: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x299244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299248: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x299248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29924c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29924Cu;
    {
        const bool branch_taken_0x29924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29924Cu;
        // 0x299250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29924c) {
            ctx->pc = 0x299268u;
            goto label_299268;
        }
    }
    ctx->pc = 0x299254u;
    // 0x299254: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x299254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x299258: 0xc04a58e  jal         func_129638
    ctx->pc = 0x299258u;
    SET_GPR_U32(ctx, 31, 0x299260u);
    ctx->pc = 0x29925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299258u;
    // 0x29925c: 0x24a53ef8  addiu       $a1, $a1, 0x3EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x299258u, 0x299260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299260u;
label_299260:
    // 0x299260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x299260u;
    {
        const bool branch_taken_0x299260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299260u;
        // 0x299264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299260) {
            ctx->pc = 0x299274u;
            goto label_299274;
        }
    }
    ctx->pc = 0x299268u;
label_299268:
    // 0x299268: 0xc04a58e  jal         func_129638
    ctx->pc = 0x299268u;
    SET_GPR_U32(ctx, 31, 0x299270u);
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x299268u, 0x299270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299270u;
label_299270:
    // 0x299270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299274:
    // 0x299274: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x299274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x299278: 0xc0a6470  jal         func_2991C0
    ctx->pc = 0x299278u;
    SET_GPR_U32(ctx, 31, 0x299280u);
    ctx->pc = 0x29927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299278u;
    // 0x29927c: 0xa3a00034  sb          $zero, 0x34($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2991C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C0u, 0x299278u, 0x299280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299280u;
label_299280:
    // 0x299280: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x299280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x299284: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x299284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29928c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x29928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x299290: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x299290u;
    SET_GPR_U32(ctx, 31, 0x299298u);
    ctx->pc = 0x299294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299290u;
    // 0x299294: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x299290u, 0x299298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299298u;
label_299298:
    // 0x299298: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x299298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29929c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x29929cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2992a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2992a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992a4: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x2992a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2992a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2992a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2992acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992b0: 0x2484bfd0  addiu       $a0, $a0, -0x4030
    ctx->pc = 0x2992b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950864));
    // 0x2992b4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2992b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2992b8: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2992b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2992bc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2992bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2992c0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2992C0u;
    SET_GPR_U32(ctx, 31, 0x2992C8u);
    ctx->pc = 0x2992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992C0u;
    // 0x2992c4: 0xa7a00068  sh          $zero, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2992C0u, 0x2992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2992c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2992cc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2992ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2992d0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2992d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2992d4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2992d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2992d8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2992d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2992dc: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2992dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2992e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2992E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992E0u;
        // 0x2992e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2992E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2992E8u;
}
