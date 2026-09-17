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

// Function: sub_002CF230
// Address: 0x2cf230 - 0x2cf330
void sub_002CF230_0x2cf230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF230_0x2cf230");
#endif

    switch (ctx->pc) {
        case 0x2cf260u: goto label_2cf260;
        case 0x2cf268u: goto label_2cf268;
        case 0x2cf280u: goto label_2cf280;
        case 0x2cf29cu: goto label_2cf29c;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2d0u: goto label_2cf2d0;
        case 0x2cf2e0u: goto label_2cf2e0;
        default: break;
    }

    ctx->pc = 0x2cf230u;

    // 0x2cf230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cf234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf23c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf240: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf24c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cf24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cf250: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cf250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cf254: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2cf254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2cf258: 0xc09d486  jal         func_275218
    ctx->pc = 0x2CF258u;
    SET_GPR_U32(ctx, 31, 0x2CF260u);
    ctx->pc = 0x2CF25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF258u;
    // 0x2cf25c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2CF258u, 0x2CF260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF260u;
label_2cf260:
    // 0x2cf260: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2CF260u;
    SET_GPR_U32(ctx, 31, 0x2CF268u);
    ctx->pc = 0x2CF264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF260u;
    // 0x2cf264: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2CF260u, 0x2CF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF268u;
label_2cf268:
    // 0x2cf268: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cf268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf26c: 0x1a600027  blez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CF26Cu;
    {
        const bool branch_taken_0x2cf26c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2CF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF26Cu;
        // 0x2cf270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf26c) {
            ctx->pc = 0x2CF30Cu;
            goto label_2cf30c;
        }
    }
    ctx->pc = 0x2CF274u;
    // 0x2cf274: 0x24160012  addiu       $s6, $zero, 0x12
    ctx->pc = 0x2cf274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2cf278: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2cf278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf27c: 0x0  nop
    ctx->pc = 0x2cf27cu;
    // NOP
label_2cf280:
    // 0x2cf280: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x2cf280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2cf284: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cf284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf288: 0xa6160070  sh          $s6, 0x70($s0)
    ctx->pc = 0x2cf288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 22));
    // 0x2cf28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf290: 0xa600006c  sh          $zero, 0x6C($s0)
    ctx->pc = 0x2cf290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cf294: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2CF294u;
    SET_GPR_U32(ctx, 31, 0x2CF29Cu);
    ctx->pc = 0x2CF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF294u;
    // 0x2cf298: 0xae15008c  sw          $s5, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2CF294u, 0x2CF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF29Cu;
label_2cf29c:
    // 0x2cf29c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2CF29Cu;
    SET_GPR_U32(ctx, 31, 0x2CF2A4u);
    ctx->pc = 0x2CF2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF29Cu;
    // 0x2cf2a0: 0x26240720  addiu       $a0, $s1, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2CF29Cu, 0x2CF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2A4u;
label_2cf2a4:
    // 0x2cf2a4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2cf2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf2a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2cf2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf2ac: 0xe6200750  swc1        $f0, 0x750($s1)
    ctx->pc = 0x2cf2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1872), bits); }
    // 0x2cf2b0: 0xe6210758  swc1        $f1, 0x758($s1)
    ctx->pc = 0x2cf2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1880), bits); }
    // 0x2cf2b4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2cf2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2cf2b8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2cf2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2cf2bc: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x2cf2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2cf2c0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF2C0u;
    {
        const bool branch_taken_0x2cf2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf2c0) {
            ctx->pc = 0x2CF2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF2C0u;
            // 0x2cf2c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF2F4u;
            goto label_2cf2f4;
        }
    }
    ctx->pc = 0x2CF2C8u;
    // 0x2cf2c8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cf2cc: 0x0  nop
    ctx->pc = 0x2cf2ccu;
    // NOP
label_2cf2d0:
    // 0x2cf2d0: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2cf2d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cf2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cf2d8: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2CF2D8u;
    SET_GPR_U32(ctx, 31, 0x2CF2E0u);
    ctx->pc = 0x2CF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF2D8u;
    // 0x2cf2dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2CF2D8u, 0x2CF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2E0u;
label_2cf2e0:
    // 0x2cf2e0: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x2cf2e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2cf2e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cf2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf2e8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CF2E8u;
    {
        const bool branch_taken_0x2cf2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf2e8) {
            ctx->pc = 0x2CF2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF2E8u;
            // 0x2cf2ec: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf2d0;
        }
    }
    ctx->pc = 0x2CF2F0u;
    // 0x2cf2f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2cf2f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2cf2f4:
    // 0x2cf2f4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2cf2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2cf2f8: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2cf2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cf2fc: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2cf2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2cf300: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2CF300u;
    {
        const bool branch_taken_0x2cf300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF300u;
        // 0x2cf304: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf300) {
            ctx->pc = 0x2CF280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf280;
        }
    }
    ctx->pc = 0x2CF308u;
    // 0x2cf308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf30c:
    // 0x2cf30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf318: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cf318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf31c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cf31cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf320: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cf320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf324: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2cf324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cf328: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF328u;
        // 0x2cf32c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF330u;
}
