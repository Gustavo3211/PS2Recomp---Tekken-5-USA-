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

// Function: sub_00297200
// Address: 0x297200 - 0x297398
void sub_00297200_0x297200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297200_0x297200");
#endif

    switch (ctx->pc) {
        case 0x297248u: goto label_297248;
        case 0x29726cu: goto label_29726c;
        case 0x297278u: goto label_297278;
        case 0x2972f8u: goto label_2972f8;
        case 0x297304u: goto label_297304;
        case 0x297310u: goto label_297310;
        case 0x297328u: goto label_297328;
        default: break;
    }

    ctx->pc = 0x297200u;

    // 0x297200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x297200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x297204: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x297204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x297208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x297208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29720c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x297210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297214: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x297214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x297218: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x297218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29721c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x29721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x297220: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x297220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297224: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x297224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x297228: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x297228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29722c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x29722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x297230: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x297230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x297234: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x297234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x297238: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x297238u;
    {
        const bool branch_taken_0x297238 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297238u;
        // 0x29723c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297238) {
            ctx->pc = 0x297290u;
            goto label_297290;
        }
    }
    ctx->pc = 0x297240u;
    // 0x297240: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x297244: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x297244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_297248:
    // 0x297248: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x297248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x29724c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297250: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x297250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297254: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x297254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x297258: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x297258u;
    {
        const bool branch_taken_0x297258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297258u;
        // 0x29725c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297258) {
            ctx->pc = 0x297284u;
            goto label_297284;
        }
    }
    ctx->pc = 0x297260u;
    // 0x297260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297264: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x297264u;
    SET_GPR_U32(ctx, 31, 0x29726Cu);
    ctx->pc = 0x297268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297264u;
    // 0x297268: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x297264u, 0x29726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29726Cu;
label_29726c:
    // 0x29726c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297270: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x297270u;
    SET_GPR_U32(ctx, 31, 0x297278u);
    ctx->pc = 0x297274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297270u;
    // 0x297274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x297270u, 0x297278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297278u;
label_297278:
    // 0x297278: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x297278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x29727c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x29727cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x297280: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x297280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_297284:
    // 0x297284: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x297284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x297288: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x297288u;
    {
        const bool branch_taken_0x297288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297288u;
        // 0x29728c: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297288) {
            ctx->pc = 0x297248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297248;
        }
    }
    ctx->pc = 0x297290u;
label_297290:
    // 0x297290: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x297290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297294: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x297298: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x297298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29729c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x29729cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2972a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2972a4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2972a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2972a8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2972a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2972ac: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2972acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2972b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2972B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B0u;
        // 0x2972b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2972B8u;
    // 0x2972b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2972b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2972bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2972bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2972c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2972c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2972c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2972c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972c8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2972c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2972cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2972ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2972d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2972d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2972d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972d8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2972d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2972dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2972dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972e0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2972e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2972e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2972e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972e8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2972e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2972ec: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x2972ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2972f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2972f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972f4: 0x0  nop
    ctx->pc = 0x2972f4u;
    // NOP
label_2972f8:
    // 0x2972f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2972f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972fc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2972FCu;
    SET_GPR_U32(ctx, 31, 0x297304u);
    ctx->pc = 0x297300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972FCu;
    // 0x297300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2972FCu, 0x297304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297304u;
label_297304:
    // 0x297304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297308: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x297308u;
    SET_GPR_U32(ctx, 31, 0x297310u);
    ctx->pc = 0x29730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297308u;
    // 0x29730c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x297308u, 0x297310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297310u;
label_297310:
    // 0x297310: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297314: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x297314u;
    {
        const bool branch_taken_0x297314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297314u;
        // 0x297318: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297314) {
            ctx->pc = 0x297364u;
            goto label_297364;
        }
    }
    ctx->pc = 0x29731Cu;
    // 0x29731c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29731cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297320: 0x26870008  addiu       $a3, $s4, 0x8
    ctx->pc = 0x297320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297324: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x297324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_297328:
    // 0x297328: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29732c: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x29732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x297330: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x297330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x297334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x297334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297338: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297338u;
    {
        const bool branch_taken_0x297338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x29733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297338u;
        // 0x29733c: 0x28c20006  slti        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297338) {
            ctx->pc = 0x297348u;
            goto label_297348;
        }
    }
    ctx->pc = 0x297340u;
    // 0x297340: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x297340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x297344: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x297344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297348:
    // 0x297348: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x297348u;
    {
        const bool branch_taken_0x297348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297348u;
        // 0x29734c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297348) {
            ctx->pc = 0x297328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297328;
        }
    }
    ctx->pc = 0x297350u;
    // 0x297350: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x297350u;
    {
        const bool branch_taken_0x297350 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x297350) {
            ctx->pc = 0x297354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297350u;
            // 0x297354: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297368u;
            goto label_297368;
        }
    }
    ctx->pc = 0x297358u;
    // 0x297358: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x29735c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x297360: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x297360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_297364:
    // 0x297364: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_297368:
    // 0x297368: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29736c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29736Cu;
    {
        const bool branch_taken_0x29736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29736Cu;
        // 0x297370: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29736c) {
            ctx->pc = 0x2972F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2972f8;
        }
    }
    ctx->pc = 0x297374u;
    // 0x297374: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x297374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297378: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x297378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29737c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29737cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297380: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x297380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x297384: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x297384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297388: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x297388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29738c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29738cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297390: 0x3e00008  jr          $ra
    ctx->pc = 0x297390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297390u;
        // 0x297394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297398u;
}
